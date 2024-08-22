// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSSERVERSTORAGESTATEMACHINECOMPLETEDMETRIC_H
#define IDSSERVERSTORAGESTATEMACHINECOMPLETEDMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSServerStorageStateMachineCompletedMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger linkType; // ivar: _linkType
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSInteger numberProcessed; // ivar: _numberProcessed
@property (readonly, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeTaken; // ivar: _timeTaken
@property (readonly, nonatomic) BOOL wasPrimary; // ivar: _wasPrimary


-(id)initWithService:(id)arg0 linkType:(NSInteger)arg1 wasPrimary:(BOOL)arg2 timeTaken:(CGFloat)arg3 numberProcessed:(NSInteger)arg4 ;


@end


#endif