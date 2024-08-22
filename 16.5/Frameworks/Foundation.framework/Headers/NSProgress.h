// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPROGRESS_H
#define NSPROGRESS_H

@class NSMutableDictionary, NSMutableSet, NSURL, NSDictionary;
@protocol NSProgressPublisher;

#import <Foundation/Foundation.h>

#import "NSProgress.h"
#import "NSProgressValues.h"
#import "NSString.h"
#import "NSOwnedDictionaryProxy.h"
#import "NSLock.h"
#import "NSNumber.h"

@interface NSProgress : NSObject <NSProgressPublisher>

 {
    NSProgress *_parent;
    NSProgressValues *_values;
    id *_resumingHandler;
    id *_cancellationHandler;
    id *_pausingHandler;
    id *_prioritizationHandler;
    NSUInteger _flags;
    NSString *_publisherID;
    NSMutableDictionary *_acknowledgementHandlersByLowercaseBundleID;
    NSMutableDictionary *_lastNotificationTimesByKey;
    NSMutableDictionary *_userInfoLastNotificationTimesByKey;
    NSMutableSet *_children;
    NSOwnedDictionaryProxy *_userInfoProxy;
    NSLock *_lock;
}


@property (getter=isCancellable) BOOL cancellable;
@property (copy) id *cancellationHandler;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property NSInteger completedUnitCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSNumber *estimatedTimeRemaining;
@property (copy) NSNumber *fileCompletedCount;
@property (copy) NSString *fileOperationKind;
@property (copy) NSNumber *fileTotalCount;
@property (copy) NSURL *fileURL;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly) CGFloat fractionCompleted;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isIndeterminate) BOOL indeterminate;
@property (copy) NSString *kind;
@property (copy) NSString *localizedAdditionalDescription;
@property (copy) NSString *localizedDescription;
@property (readonly, getter=isOld) BOOL old;
@property (getter=isPausable) BOOL pausable;
@property (readonly, getter=isPaused) BOOL paused;
@property (copy) id *pausingHandler;
@property (copy) id *resumingHandler;
@property (readonly) Class superclass;
@property (copy) NSNumber *throughput;
@property NSInteger totalUnitCount;
@property (readonly, copy) NSDictionary *userInfo;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)_addSubscriberForCategory:(id)arg0 usingPublishingHandler:(id)arg1 ;
+(id)_addSubscriberForFileURL:(id)arg0 usingBlock:(id)arg1 ;
+(id)_addSubscriberForFileURL:(id)arg0 withPublishingHandler:(id)arg1 ;
+(id)_publisherInterface;
+(id)_registrarInterface;
+(id)_serverConnection;
+(id)_subscriberInterface;
+(id)addSubscriberForFileURL:(id)arg0 usingBlock:(id)arg1 ;
+(id)addSubscriberForFileURL:(id)arg0 withPublishingHandler:(id)arg1 ;
+(id)currentProgress;
+(id)discreteProgressWithTotalUnitCount:(NSInteger)arg0 ;
+(id)keyPathsForValuesAffectingLocalizedAdditionalDescription;
+(id)keyPathsForValuesAffectingLocalizedDescription;
+(id)progressWithTotalUnitCount:(NSInteger)arg0 ;
+(id)progressWithTotalUnitCount:(NSInteger)arg0 parent:(id)arg1 pendingUnitCount:(NSInteger)arg2 ;
+(void)_removeSubscriber:(id)arg0 ;
+(void)removeSubscriber:(id)arg0 ;
-(BOOL)_adoptChildUserInfo;
-(BOOL)isPrioritizable;
-(CGFloat)_remoteFractionCompleted;
-(NSUInteger)ownedDictionaryCount;
-(id)_acknowledgementHandlerForAppBundleIdentifier:(SEL)arg0 ;
-(id)_indentedDescription:(NSUInteger)arg0 ;
-(id)_initWithValues:(id)arg0 ;
-(id)_parent;
-(id)_publishingAppBundleIdentifier;
-(id)acknowledgementHandlerForAppBundleIdentifier:(SEL)arg0 ;
-(id)byteCompletedCount;
-(id)byteTotalCount;
-(id)init;
-(id)initWithParent:(id)arg0 userInfo:(id)arg1 ;
-(id)ownedDictionaryKeyEnumerator;
-(id)ownedDictionaryObjectForKey:(id)arg0 ;
-(id)prioritizationHandler:(SEL)arg0 ;
-(void)_addCompletedUnitCount:(NSInteger)arg0 ;
-(void)_addImplicitChild:(id)arg0 ;
-(void)_notifyRemoteObserversOfUserInfoValueForKey:(id)arg0 ;
-(void)_notifyRemoteObserversOfValueForKeys:(id)arg0 ;
-(void)_publish;
// -(void)_setAcknowledgementHandler:(id)arg0 forAppBundleIdentifier:(unk)arg1  ;
-(void)_setParent:(id)arg0 portion:(NSInteger)arg1 ;
-(void)_setRemoteUserInfoValue:(id)arg0 forKey:(id)arg1 ;
-(void)_setRemoteValues:(id)arg0 forKeys:(id)arg1 ;
// -(void)_setValueForKeys:(id)arg0 settingBlock:(unk)arg1  ;
-(void)_unpublish;
-(void)_updateChild:(id)arg0 fraction:(struct _NSProgressFractionTuple )arg1 portion:(NSInteger)arg2 ;
-(void)_updateFractionCompleted:(struct _NSProgressFractionTuple )arg0 ;
-(void)acknowledge;
-(void)acknowledgeWithSuccess:(BOOL)arg0 ;
-(void)addChild:(id)arg0 withPendingUnitCount:(NSInteger)arg1 ;
-(void)appWithBundleID:(id)arg0 didAcknowledgeWithSuccess:(BOOL)arg1 ;
-(void)becomeCurrentWithPendingUnitCount:(NSInteger)arg0 ;
-(void)becomeCurrentWithPendingUnitCount:(NSInteger)arg0 inBlock:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)handleAcknowledgementByAppWithBundleIdentifer:(id)arg0 usingBlock:(id)arg1 ;
-(void)handleAcknowledgementByAppWithBundleIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)pause;
-(void)performAsCurrentWithPendingUnitCount:(NSInteger)arg0 usingBlock:(id)arg1 ;
-(void)prioritize;
-(void)publish;
-(void)resignCurrent;
-(void)resume;
// -(void)setAcknowledgementHandler:(id)arg0 forAppBundleIdentifier:(unk)arg1  ;
-(void)setByteCompletedCount:(id)arg0 ;
-(void)setByteTotalCount:(id)arg0 ;
-(void)setPrioritizable:(BOOL)arg0 ;
-(void)setPrioritizationHandler:(id)arg0 ;
-(void)set_adoptChildUserInfo:(BOOL)arg0 ;
-(void)unpublish;


@end


#endif