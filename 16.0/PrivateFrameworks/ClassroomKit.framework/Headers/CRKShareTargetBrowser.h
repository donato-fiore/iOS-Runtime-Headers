// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKSHARETARGETBROWSER_H
#define CRKSHARETARGETBROWSER_H

@class CATOperationQueue, NSString, CATTaskClient;
@protocol CATTaskClientDelegate, CATTaskOperationNotificationDelegate, CRKShareTargetCollectorDelegate, OS_dispatch_queue, CRKShareTargetBrowserDelegate;

#import <Foundation/Foundation.h>

#import "CRKShareTargetCollector.h"
#import "CRKShareTargetBrowserTransportFactory.h"

@interface CRKShareTargetBrowser : NSObject <CATTaskClientDelegate, CATTaskOperationNotificationDelegate, CRKShareTargetCollectorDelegate>

 {
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    id<CRKShareTargetBrowserDelegate> *mDelegate;
    CATOperationQueue *mOperationQueue;
    BOOL mBrowsing;
    BOOL mIsValid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CATTaskClient *instructorClient; // ivar: _instructorClient
@property (readonly, nonatomic) CRKShareTargetCollector *shareTargetCollector; // ivar: _shareTargetCollector
@property (retain, nonatomic) CATTaskClient *studentClient; // ivar: _studentClient
@property (readonly) Class superclass;
@property (readonly, nonatomic) CRKShareTargetBrowserTransportFactory *transportFactory; // ivar: _transportFactory


-(BOOL)isClientInvalidationError:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)makeShareTargetsWithDictionaries:(id)arg0 taskClient:(id)arg1 ;
-(void)acquireStudentActivityAssertion;
-(void)acquireStudentActivityAssertionOperationDidFail:(id)arg0 ;
-(void)browseForInstructorTargetsOperationDidFail:(id)arg0 ;
-(void)browseForStudentTargetsOperationDidFail:(id)arg0 ;
-(void)client:(id)arg0 didInterruptWithError:(id)arg1 ;
-(void)clientDidConnect:(id)arg0 ;
-(void)connectToInstructord;
-(void)connectToStudentd;
-(void)dealloc;
-(void)delegateDidFindTargets:(id)arg0 ;
-(void)delegateDidInterruptWithError:(id)arg0 ;
-(void)delegateDidRemoveTargets:(id)arg0 ;
-(void)invalidate;
-(void)invalidateClient:(id)arg0 ;
-(void)resume;
-(void)shareTargetCollector:(id)arg0 didFindTargets:(id)arg1 ;
-(void)shareTargetCollector:(id)arg0 didRemoveTargets:(id)arg1 ;
-(void)startBrowsingForInstructorTargets;
-(void)startBrowsingForStudentTargets;
-(void)suspend;
-(void)taskOperation:(id)arg0 didPostNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)tearDownInstructorClient;
-(void)tearDownStudentClient;


@end


#endif