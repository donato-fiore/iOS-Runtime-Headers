// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEFERREDPROCESSINGANALYTICSPAYLOAD_H
#define BWDEFERREDPROCESSINGANALYTICSPAYLOAD_H

@class NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWDeferredProcessingAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (nonatomic) unsigned int containerAgeInSeconds; // ivar: _containerAgeInSeconds
@property (nonatomic) int containerProcessingCount; // ivar: _containerProcessingCount
@property (nonatomic) NSUInteger containerSizeInBytes; // ivar: _containerSizeInBytes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int error; // ivar: _error
@property (nonatomic) BOOL fileBacked; // ivar: _fileBacked
@property (nonatomic) unsigned int graphPrepareDurationInMilliseconds; // ivar: _graphPrepareDurationInMilliseconds
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL interactiveQoS; // ivar: _interactiveQoS
@property (nonatomic) unsigned int jobDurationInMilliseconds; // ivar: _jobDurationInMilliseconds
@property (copy, nonatomic) NSString *processingResult; // ivar: _processingResult
@property (nonatomic) int processingType; // ivar: _processingType
@property (readonly) Class superclass;


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif