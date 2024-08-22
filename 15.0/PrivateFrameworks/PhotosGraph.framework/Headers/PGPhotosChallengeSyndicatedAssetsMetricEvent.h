// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPHOTOSCHALLENGESYNDICATEDASSETSMETRICEVENT_H
#define PGPHOTOSCHALLENGESYNDICATEDASSETSMETRICEVENT_H

@class NSString, NSDictionary, NSArray;
@protocol PLMultiplePayloadsMetricEvent;


#import "PGPhotosChallengeMetricEvent.h"

@interface PGPhotosChallengeSyndicatedAssetsMetricEvent : PGPhotosChallengeMetricEvent <PLMultiplePayloadsMetricEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) NSArray *payloads;
@property (readonly) Class superclass;




@end


#endif