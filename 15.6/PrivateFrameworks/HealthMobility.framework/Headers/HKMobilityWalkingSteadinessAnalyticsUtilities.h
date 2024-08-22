// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMOBILITYWALKINGSTEADINESSANALYTICSUTILITIES_H
#define HKMOBILITYWALKINGSTEADINESSANALYTICSUTILITIES_H


#import <Foundation/Foundation.h>


@interface HKMobilityWalkingSteadinessAnalyticsUtilities : NSObject



+(id)payloadStringForWalkingSteadinessClassification:(NSInteger)arg0 ;
+(id)payloadStringForWalkingSteadinessNotificationClassificationWithValue:(NSInteger)arg0 ;
+(id)payloadStringForWalkingSteadinessNotificationInteractionWithActionIdentifier:(id)arg0 ;
+(id)payloadStringForWalkingSteadinessNotificationTypeWithValue:(NSInteger)arg0 ;


@end


#endif