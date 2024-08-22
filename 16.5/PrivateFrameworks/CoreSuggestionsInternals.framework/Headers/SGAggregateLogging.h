// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGAGGREGATELOGGING_H
#define SGAGGREGATELOGGING_H


#import <Foundation/Foundation.h>


@interface SGAggregateLogging : NSObject



+(NSUInteger)twoSigFigs:(id)arg0 ;
+(id)_appNameForApp:(NSUInteger)arg0 ;
+(id)aggregateKeyForKeySuffix:(id)arg0 ;
+(id)contactsFromEntity:(id)arg0 ;
+(id)eventsFromEntity:(id)arg0 ;
+(void)_pushValuesForContact:(id)arg0 usingDomain:(id)arg1 subdomain:(id)arg2 type:(id)arg3 action:(id)arg4 extraSignature:(id)arg5 ;
+(void)addValueForScalarKeyWithDomain:(id)arg0 subdomain:(id)arg1 suffix:(id)arg2 action:(id)arg3 value:(NSInteger)arg4 ;
+(void)app:(id)arg0 performedAction:(id)arg1 onContacts:(id)arg2 withResult:(id)arg3 elapsedTime:(NSUInteger)arg4 ;
+(void)app:(id)arg0 performedAction:(id)arg1 onEvents:(id)arg2 withResult:(id)arg3 elapsedTime:(NSUInteger)arg4 ;
+(void)assetVersion;
+(void)assetVersion:(NSInteger)arg0 ;
+(void)contactConfirmed:(id)arg0 inApp:(NSUInteger)arg1 ;
+(void)contactRejected:(id)arg0 inApp:(NSUInteger)arg1 ;
+(void)contactSuggestionImpressionsViaBanner:(int)arg0 ;
+(void)contactsFoundOnDeviceEnabled:(BOOL)arg0 ;
+(void)contactsSuggested:(id)arg0 withElapsedTime:(NSUInteger)arg1 inApp:(NSUInteger)arg2 ;
+(void)databaseCorruptionDetectedViaCorruptionMarker;
+(void)databaseCorruptionDetectedViaIntegrityCheck;
+(void)detail:(id)arg0 confirmedForContact:(id)arg1 ;
+(void)detail:(id)arg0 rejectedForContact:(id)arg1 ;
+(void)eventConfirmed:(id)arg0 inApp:(NSUInteger)arg1 ;
+(void)eventConfirmedByRecord:(id)arg0 ;
+(void)eventRejected:(id)arg0 inApp:(NSUInteger)arg1 ;
+(void)eventRejectedByRecord:(id)arg0 ;
+(void)eventSuggestionImpressionsViaBanner:(int)arg0 ;
+(void)eventsFoundOnDeviceEnabled:(BOOL)arg0 ;
+(void)eventsSuggested:(id)arg0 withElapsedTime:(NSUInteger)arg1 inApp:(NSUInteger)arg2 ;
+(void)harvestDrainedNumberOfMails:(int)arg0 ;
+(void)harvestedEntity:(id)arg0 withElapsedTime:(NSUInteger)arg1 ;
+(void)harvestedMessageInQueueSince:(CGFloat)arg0 ;
+(void)hypotheticalContactSuggestionImpressionsIncludingInsignificant:(int)arg0 ;
+(void)hypotheticalSuggestionImpressionsIncludingActedOn:(int)arg0 ;
+(void)identityGroupSize:(NSUInteger)arg0 ;
+(void)incrementKeyWithDomain:(id)arg0 subdomain:(id)arg1 suffix:(id)arg2 ;
+(void)incrementKeyWithDomain:(id)arg0 subdomain:(id)arg1 suffix:(id)arg2 action:(id)arg3 ;
+(void)incrementKeyWithDomain:(id)arg0 subdomain:(id)arg1 suffix:(id)arg2 action:(id)arg3 by:(NSUInteger)arg4 ;
+(void)incrementKeyWithDomain:(id)arg0 subdomain:(id)arg1 suffix:(id)arg2 by:(NSUInteger)arg3 ;
+(void)incrementKeyWithDomain:(id)arg0 suffix:(id)arg1 ;
+(void)incrementValuesInDomain:(id)arg0 subdomain:(id)arg1 type:(id)arg2 action:(id)arg3 withKeysAndIncrements:(id)arg4 extraSignature:(id)arg5 ;
+(void)messagesAdded:(NSUInteger)arg0 ;
+(void)messagesDeleted:(NSUInteger)arg0 ;
+(void)messagesFound:(NSUInteger)arg0 ;
+(void)messagesFoundAfterUndisplayablyLost:(NSUInteger)arg0 ;
+(void)messagesLost:(NSUInteger)arg0 ;
+(void)messagesPruned:(NSUInteger)arg0 ;
+(void)messagesUndisplayablyLost:(NSInteger)arg0 ;
+(void)performedAction:(id)arg0 forApp:(id)arg1 onContact:(id)arg2 ;
+(void)performedAction:(id)arg0 forApp:(id)arg1 onEvent:(id)arg2 ;
+(void)performedAction:(id)arg0 onDetail:(id)arg1 forContact:(id)arg2 ;
+(void)performedAction:(id)arg0 onEventInCalendar:(id)arg1 ;
+(void)performedAction:(id)arg0 onRecordForContact:(id)arg1 ;
+(void)pushValue:(CGFloat)arg0 toDistKeyWithDomain:(id)arg1 suffix:(id)arg2 ;
+(void)pushValue:(CGFloat)arg0 toDistKeyWithSuffix:(id)arg1 ;
+(void)pushValueForDistributionKeyWithDomain:(id)arg0 subdomain:(id)arg1 suffix:(id)arg2 action:(id)arg3 value:(NSInteger)arg4 ;
+(void)reMatched:(id)arg0 ;
+(void)recordConfirmedForContact:(id)arg0 ;
+(void)recordRejectedForContact:(id)arg0 ;
+(void)setKeyWithDomain:(id)arg0 suffix:(id)arg1 toValue:(NSUInteger)arg2 ;
+(void)setValueForScalarKeyWithDomain:(id)arg0 subdomain:(id)arg1 suffix:(id)arg2 action:(id)arg3 value:(NSInteger)arg4 ;
+(void)suggestionImpressionsViaBanner:(int)arg0 ;
+(void)suggestionImpressionsViaBannerSuppressed:(int)arg0 ;


@end


#endif