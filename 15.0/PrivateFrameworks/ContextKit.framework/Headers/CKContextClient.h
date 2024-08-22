// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONTEXTCLIENT_H
#define CKCONTEXTCLIENT_H

@class NSSet, NSString, NSMutableArray;
@protocol CKContextServiceUpdateNotifications;

#import <Foundation/Foundation.h>


@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications>

 {
    NSSet *_capabilities;
    NSString *_indexVersionId;
    NSMutableArray *_updateHandlers;
}


@property (readonly, nonatomic) NSSet *capabilities;
@property (readonly, nonatomic) NSUInteger defaultRequestType; // ivar: _defaultRequestType


+(BOOL)isLikelyUnsolicitedUserInteraction;
+(CGFloat)timeIntervalBetweenMachTime:(NSUInteger)arg0 andMachTime:(NSUInteger)arg1 ;
+(id)_serviceSemaphore;
+(id)clientWithDefaultRequestType:(NSUInteger)arg0 ;
+(id)new;
+(void)_observeApplicationStateNotifications;
+(void)_updateServiceSemaphoreAsync;
+(void)initialize;
-(NSInteger)tryAcquireServiceSemaphoreNeedsIncPending:(BOOL)arg0 ;
-(id)indexVersionId;
-(id)init;
-(id)initWithDefaultRequestType:(NSUInteger)arg0 ;
-(id)newRequest;
-(id)retrieveCapabilites;
-(void)_updateCachedCapabilites;
-(void)ancestorsForTopics:(id)arg0 withReply:(id)arg1 ;
-(void)capabilitiesWithReply:(id)arg0 ;
-(void)didReceiveCKContextServiceUpdateNotification;
-(void)ensureFullyInitialized;
-(void)groupResponses:(id)arg0 withReply:(id)arg1 ;
-(void)registerConfigurationUpdateHandler:(id)arg0 ;
-(void)workWithServiceSemaphore:(id)arg0 ;


@end


#endif