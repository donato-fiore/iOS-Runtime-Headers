// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBOBSERVERSERVERPROXY_H
#define BBOBSERVERSERVERPROXY_H

@class NSXPCConnection;
@protocol BBObserverClientInterface, BBObserverServerInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BBObserver.h"

@interface BBObserverServerProxy : NSObject <BBObserverClientInterface, BBObserverServerInterface>

 {
    BOOL _isValid;
    BOOL _isEstablished;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) BBObserver *observer; // ivar: _observer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)xpcInterface;
-(BOOL)established;
-(BOOL)isValid;
-(id)initWithObserver:(id)arg0 connection:(id)arg1 queue:(id)arg2 calloutQueue:(id)arg3 ;
-(void)clearBulletinIDs:(id)arg0 inSection:(id)arg1 ;
-(void)clearBulletinsFromDate:(id)arg0 toDate:(id)arg1 inSections:(id)arg2 ;
-(void)clearSection:(id)arg0 ;
-(void)dealloc;
-(void)finishedWithBulletinID:(id)arg0 transactionID:(NSUInteger)arg1 ;
-(void)getBulletinsForPublisherMatchIDs:(id)arg0 sectionID:(id)arg1 withHandler:(id)arg2 ;
-(void)getBulletinsWithHandler:(id)arg0 ;
-(void)getObserverDebugInfo:(id)arg0 ;
-(void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg0 withHandler:(id)arg1 ;
-(void)getSectionInfoForActiveSectionsWithHandler:(id)arg0 ;
-(void)getSectionInfoForSectionIDs:(id)arg0 withHandler:(id)arg1 ;
-(void)getSectionInfoWithHandler:(id)arg0 ;
-(void)getSectionParametersForSectionID:(id)arg0 withHandler:(id)arg1 ;
-(void)getUniversalSectionIDForSectionID:(id)arg0 withHandler:(id)arg1 ;
-(void)handleResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)invalidate;
-(void)noteBulletinsLoadedForSectionID:(id)arg0 ;
-(void)noteServerReceivedResponseForBulletin:(id)arg0 ;
-(void)removeBulletins:(id)arg0 inSection:(id)arg1 fromFeeds:(NSUInteger)arg2 ;
-(void)removeSection:(id)arg0 ;
-(void)requestNoticesBulletinsForAllSections;
-(void)requestNoticesBulletinsForSectionID:(id)arg0 ;
-(void)updateBulletin:(id)arg0 withHandler:(id)arg1 ;
-(void)updateGlobalSettings:(id)arg0 ;
-(void)updateSectionInfo:(id)arg0 ;
-(void)updateSectionParameters:(id)arg0 forSectionID:(id)arg1 ;


@end


#endif