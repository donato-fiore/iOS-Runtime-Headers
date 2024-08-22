// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSORIENTATIONOBSERVER_H
#define FBSORIENTATIONOBSERVER_H

@class NSString;
@protocol FBSOrientationObserverClientDelegate, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FBSOrientationObserverClient.h"
#import "FBSOrientationUpdate.h"

@interface FBSOrientationObserver : NSObject <FBSOrientationObserverClientDelegate, BSInvalidatable>

 {
    FBSOrientationObserverClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callback_queue;
    id *_handler;
    FBSOrientationUpdate *_freshestUpdate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)activeInterfaceOrientation;
-(id)_getAndSetFreshestUpdateGivenUpdate:(id)arg0 ;
-(id)init;
-(void)activeInterfaceOrientationWithCompletion:(id)arg0 ;
-(void)client:(id)arg0 handleOrientationUpdate:(id)arg1 ;
-(void)dealloc;
-(void)handleOrientationResetForClient:(id)arg0 ;
-(void)invalidate;


@end


#endif