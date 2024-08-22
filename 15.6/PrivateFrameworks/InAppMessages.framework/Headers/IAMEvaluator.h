// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IAMEVALUATOR_H
#define IAMEVALUATOR_H

@class ICInAppMessageMetadataEntry, NSArray, NSDictionary, NSDate, NSString;
@protocol IAMApplicationContextProvider;

#import <Foundation/Foundation.h>


@interface IAMEvaluator : NSObject {
    ICInAppMessageMetadataEntry *_currentMetadata;
    ICInAppMessageMetadataEntry *_currentProximityMetadata;
    NSArray *_messageEntries;
    NSDictionary *_metadataEntries;
    NSDate *_lastDisplayTimeForRestrictedPresentationPolicyGroup;
    NSDate *_lastDisplayTimeForNormalPresentationPolicyGroup;
    id<IAMApplicationContextProvider> *_applicationContext;
    NSString *_hostBundleIdentifier;
    NSDictionary *_messageGroupsByGroupIdentifier;
}


@property (retain) NSArray *messagesCloseToPassing; // ivar: _messagesCloseToPassing
@property (retain) NSArray *passingMessageEntries; // ivar: _passingMessageEntries


+(BOOL)_isMessageWithinDateRange:(id)arg0 ;
+(BOOL)applicationContext:(id)arg0 allowsPresentationForPolicyGroup:(NSInteger)arg1 withLastDisplayTime:(id)arg2 ;
+(NSInteger)_compareCurrentTimeWithMessageTime:(CGFloat)arg0 ;
-(BOOL)_didCacheResourcesForMessageIfRequired:(id)arg0 ;
-(BOOL)_doesPresentationPolicyAllowPresentationOfMessage:(id)arg0 ;
-(BOOL)_evaluateCompoundRule:(id)arg0 forMessageEntry:(id)arg1 ;
-(BOOL)_evaluateCondition:(id)arg0 forMessageEntry:(id)arg1 ;
-(BOOL)_evaluateRule:(id)arg0 forMessageEntry:(id)arg1 ;
-(NSUInteger)_calculateCompoundRuleProximity:(id)arg0 forMessageEntry:(id)arg1 ;
-(NSUInteger)_calculateConditionProximity:(id)arg0 forMessageEntry:(id)arg1 ;
-(NSUInteger)_calculateRuleProximity:(id)arg0 forMessageEntry:(id)arg1 ;
-(NSUInteger)_messageEntryProximity:(id)arg0 ;
-(id)_contextPropertyWithName:(id)arg0 forMessageGroupIdentifier:(id)arg1 ;
-(id)_contextPropertyWithName:(id)arg0 messageBundleIdentifier:(id)arg1 conditionBundleIdentifier:(id)arg2 ;
-(id)_valueForCondition:(id)arg0 messageBundleIdentifier:(id)arg1 messageMetadata:(id)arg2 ;
-(id)computeMessagesCloseToPassingWithProximityThreshold:(NSUInteger)arg0 ;
-(id)computePassingMessageEntries;
-(id)initWithMessageEntries:(id)arg0 metadataEntries:(id)arg1 applicationContext:(id)arg2 hostBundleIdentifier:(id)arg3 messageGroups:(id)arg4 lastDisplayTimeForRestrictedPresentationPolicyGroup:(id)arg5 lastDisplayTimeForNormalPresentationPolicyGroup:(id)arg6 ;


@end


#endif