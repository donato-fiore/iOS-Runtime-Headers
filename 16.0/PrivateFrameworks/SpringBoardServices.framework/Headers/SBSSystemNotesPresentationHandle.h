// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSSYSTEMNOTESPRESENTATIONHANDLE_H
#define SBSSYSTEMNOTESPRESENTATIONHANDLE_H

@class NSHashTable, NSString;
@protocol SBSSystemNotesPresentationServerToClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBSSystemNotesPresentationClientToServerProxy.h"
#import "SBSSystemNotesPresentationConfiguration.h"

@interface SBSSystemNotesPresentationHandle : NSObject <SBSSystemNotesPresentationServerToClientInterface>

 {
    os_unfair_lock_s _lock;
    NSInteger _lock_state;
    NSInteger _lock_presentationMode;
    NSHashTable *_lock_observers;
    SBSSystemNotesPresentationClientToServerProxy *_handleClient;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    SBSSystemNotesPresentationConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger presentationMode;
@property (readonly, copy, nonatomic) SBSSystemNotesPresentationConfiguration *requestedConfiguration;
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 client:(id)arg1 ;
-(void)_invalidateWithError:(id)arg0 locally:(BOOL)arg1 ;
-(void)activate;
-(void)addObserver:(id)arg0 ;
-(void)configuration:(id)arg0 didChangeToPresentationMode:(id)arg1 ;
-(void)configuration:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;


@end


#endif