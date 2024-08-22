// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BBOBSERVER_H
#define BBOBSERVER_H

@class NSMutableDictionary, NSMapTable, NSString;
@protocol BBAssertionDelegate, OS_dispatch_queue, BBObserverDelegate;

#import <Foundation/Foundation.h>

#import "BBObserverServerProxy.h"

@interface BBObserver : NSObject <BBAssertionDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_sectionParametersBySectionID;
    NSMapTable *_bulletinLifeAssertions;
    NSMutableDictionary *_remainingFeedsByBulletinID;
    BBObserverServerProxy *_serverProxy;
    BOOL _isGateway;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BBObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *gatewayName; // ivar: _gatewayName
@property (readonly, nonatomic) NSUInteger gatewayPriority; // ivar: _gatewayPriority
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger observerFeed; // ivar: _observerFeed
@property (readonly) Class superclass;


+(id)gatewayWithQueue:(id)arg0 calloutQueue:(id)arg1 name:(id)arg2 priority:(NSUInteger)arg3 ;
+(id)observerWithQueue:(id)arg0 calloutQueue:(id)arg1 forGatewayName:(id)arg2 ;
+(void)initialize;
-(BOOL)isValid;
-(id)_initWithQueue:(id)arg0 calloutQueue:(id)arg1 gatewayName:(id)arg2 gatewayPriority:(NSUInteger)arg3 isGateway:(BOOL)arg4 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 asGateway:(id)arg1 priority:(NSUInteger)arg2 ;
-(id)initWithQueue:(id)arg0 calloutQueue:(id)arg1 ;
-(id)initWithQueue:(id)arg0 calloutQueue:(id)arg1 gatewayName:(id)arg2 gatewayPriority:(NSUInteger)arg3 isGateway:(BOOL)arg4 connection:(id)arg5 ;
-(id)initWithQueue:(id)arg0 forGateway:(id)arg1 ;
-(id)parametersForSectionID:(id)arg0 ;
-(void)_queue_invalidate;
-(void)_queue_noteBulletinsLoadedForSectionID:(id)arg0 ;
-(void)_queue_registerBulletin:(id)arg0 withTransactionID:(NSUInteger)arg1 ;
-(void)_queue_serverProxy:(id)arg0 connectionStateDidChange:(BOOL)arg1 ;
-(void)_queue_updateAddBulletin:(id)arg0 withReply:(id)arg1 ;
-(void)_queue_updateBulletin:(id)arg0 withReply:(id)arg1 ;
-(void)_queue_updateModifyBulletin:(id)arg0 withReply:(id)arg1 ;
-(void)_queue_updateRemoveBulletin:(id)arg0 withReply:(id)arg1 ;
-(void)assertionExpired:(id)arg0 transactionID:(NSUInteger)arg1 ;
-(void)clearBulletins:(id)arg0 inSection:(id)arg1 ;
-(void)clearBulletinsFromDate:(id)arg0 toDate:(id)arg1 inSections:(id)arg2 ;
-(void)clearSection:(id)arg0 ;
-(void)dealloc;
-(void)getBulletinsForPublisherMatchIDs:(id)arg0 sectionID:(id)arg1 withCompletion:(id)arg2 ;
-(void)getBulletinsWithCompletion:(id)arg0 ;
-(void)getComposedImageSizeForAttachment:(id)arg0 bulletin:(id)arg1 withCompletion:(id)arg2 ;
-(void)getParametersForSectionID:(id)arg0 withCompletion:(id)arg1 ;
-(void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg0 withCompletion:(id)arg1 ;
-(void)getSectionInfoForActiveSectionsWithCompletion:(id)arg0 ;
-(void)getSectionInfoForSectionIDs:(id)arg0 withCompletion:(id)arg1 ;
-(void)getSectionInfoWithCompletion:(id)arg0 ;
-(void)getUniversalSectionIDForSectionID:(id)arg0 withCompletion:(id)arg1 ;
-(void)invalidate;
-(void)noteBulletinsLoadedForSectionID:(id)arg0 ;
-(void)noteServerReceivedResponseForBulletin:(id)arg0 ;
-(void)removeBulletins:(id)arg0 inSection:(id)arg1 ;
-(void)removeBulletins:(id)arg0 inSection:(id)arg1 fromFeed:(NSUInteger)arg2 ;
-(void)removeSection:(id)arg0 ;
-(void)requestListBulletinsForSectionID:(id)arg0 ;
-(void)requestNoticesBulletinsForAllSections;
-(void)requestNoticesBulletinsForSectionID:(id)arg0 ;
-(void)sendResponse:(id)arg0 ;
-(void)sendResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)serverProxy:(id)arg0 connectionStateDidChange:(BOOL)arg1 ;
-(void)updateBulletin:(id)arg0 withReply:(id)arg1 ;
-(void)updateGlobalSettings:(id)arg0 ;
-(void)updateSectionInfo:(id)arg0 ;
-(void)updateSectionParameters:(id)arg0 forSectionID:(id)arg1 ;


@end


#endif