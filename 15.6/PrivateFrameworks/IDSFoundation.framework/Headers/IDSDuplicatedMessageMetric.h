// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSDUPLICATEDMESSAGEMETRIC_H
#define IDSDUPLICATEDMESSAGEMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSDuplicatedMessageMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;


-(id)init;


@end


#endif