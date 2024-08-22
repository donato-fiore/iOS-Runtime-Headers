// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BAGRESOURCEVENDOR_H
#define BAGRESOURCEVENDOR_H

@class IDSXPCDaemonController, NSString, NSMutableDictionary, NSUUID;
@protocol BAGXPCProtocolClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BAGResourceVendor : NSObject <BAGXPCProtocolClient>



@property (retain, nonatomic) IDSXPCDaemonController *daemonController; // ivar: _daemonController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *updateBlocksByOptions; // ivar: _updateBlocksByOptions
@property (retain, nonatomic) NSUUID *vendorID; // ivar: _vendorID


-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 daemonController:(id)arg1 ;
-(void)_calloutToBlocksForOptions:(id)arg0 withResource:(id)arg1 andContext:(id)arg2 ;
-(void)_handleInterruption;
-(void)_performCancelForOptions:(id)arg0 ;
-(void)_performFetchForOptions:(id)arg0 ;
-(void)dealloc;
-(void)resourceUpdated:(id)arg0 forOptions:(id)arg1 withContext:(id)arg2 ;
-(void)stopTrackingResourceForOptions:(id)arg0 ;
-(void)trackResourceForOptions:(id)arg0 updateBlock:(id)arg1 ;


@end


#endif