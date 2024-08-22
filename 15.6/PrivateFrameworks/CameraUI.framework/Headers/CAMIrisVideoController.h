// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMIRISVIDEOCONTROLLER_H
#define CAMIRISVIDEOCONTROLLER_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol CAMNebulaDaemonIrisClientProtocol, OS_dispatch_queue, CAMIrisVideoControllerDelegate;

#import <Foundation/Foundation.h>

#import "CAMNebulaDaemonProxyManager.h"

@interface CAMIrisVideoController : NSObject <CAMNebulaDaemonIrisClientProtocol>



@property (readonly, nonatomic) NSMutableArray *_jobsToBeSent; // ivar: __jobsToBeSent
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_mutexQueue; // ivar: __mutexQueue
@property (readonly, nonatomic) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager; // ivar: __nebulaDaemonProxyManager
@property (readonly, nonatomic) NSMutableDictionary *_pendingJobs; // ivar: __pendingJobs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CAMIrisVideoControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isWaitingOnNebuladForRequest:(id)arg0 ;
-(BOOL)shouldHandleLivePhotoRenderingForRequest:(id)arg0 ;
-(id)initWithNebulaDaemonProxyManager:(id)arg0 delegate:(id)arg1 ;
-(void)_notifyDelegateOfVideoLocalPersistenceResult:(id)arg0 forVideoPersistenceUUID:(id)arg1 ;
-(void)_submitJob:(id)arg0 ;
-(void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)arg0 ;
-(void)stillImageRequest:(id)arg0 didCompleteVideoCaptureWithResult:(id)arg1 ;
-(void)stillImageRequestDidCompleteCapture:(id)arg0 error:(id)arg1 ;


@end


#endif