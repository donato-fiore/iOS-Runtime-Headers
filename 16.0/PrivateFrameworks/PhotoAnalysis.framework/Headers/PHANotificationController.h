// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHANOTIFICATIONCONTROLLER_H
#define PHANOTIFICATIONCONTROLLER_H

@class PGManager, PHUserFeedbackCalculator;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PHANotificationController : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
    PGManager *_graphManager;
    PHUserFeedbackCalculator *_userFeedbackCalculator;
}




-(BOOL)shouldFireNotificationForMemoriesWithScores:(id)arg0 withCreationReason:(NSUInteger)arg1 ;
-(BOOL)userFeedbackScoreIsAcceptableForAssetCollection:(id)arg0 memoryFeatures:(id)arg1 userFeedbackCalculator:(id)arg2 ;
-(BOOL)userIsActivelyUsingPhotos;
-(id)_userFeedbackCalculatorWithPhotoLibrary:(id)arg0 ;
-(id)bestDateForDeliveringNotification;
-(id)initWithGraphManager:(id)arg0 ;
-(id)initWithGraphManager:(id)arg0 userFeedbackCalculator:(id)arg1 ;
-(void)fireNotificationForMemoryIdentifiers:(id)arg0 withCreationReason:(NSUInteger)arg1 ;
-(void)fireNotificationForSuggestionIdentifiers:(id)arg0 ;
-(void)postNotificationForMemory:(id)arg0 withCreationReason:(NSUInteger)arg1 forceImmediateDelivery:(BOOL)arg2 ;
-(void)postNotificationForSuggestion:(id)arg0 deliveryDate:(id)arg1 ;


@end


#endif