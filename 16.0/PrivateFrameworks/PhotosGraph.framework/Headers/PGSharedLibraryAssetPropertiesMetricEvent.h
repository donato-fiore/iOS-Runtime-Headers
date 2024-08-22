// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSHAREDLIBRARYASSETPROPERTIESMETRICEVENT_H
#define PGSHAREDLIBRARYASSETPROPERTIESMETRICEVENT_H

@class NSMutableDictionary, NSString, NSDictionary, NSArray;
@protocol PLMultiplePayloadsMetricEvent;


#import "PGPhotosChallengeMetricEvent.h"
#import "PGManagerWorkingContext.h"

@interface PGSharedLibraryAssetPropertiesMetricEvent : PGPhotosChallengeMetricEvent <PLMultiplePayloadsMetricEvent>

 {
    PGManagerWorkingContext *_workingContext;
    NSMutableDictionary *_payloadByAssetIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) NSArray *payloads;
@property (retain, nonatomic) NSDictionary *resultsByAssetIdentifier; // ivar: _resultsByAssetIdentifier
@property (readonly) Class superclass;


-(id)initWithWorkingContext:(id)arg0 questionMetricType:(unsigned short)arg1 metricEventFetchHelper:(id)arg2 ;
-(void)gatherMetricsWithProgressBlock:(id)arg0 ;


@end


#endif