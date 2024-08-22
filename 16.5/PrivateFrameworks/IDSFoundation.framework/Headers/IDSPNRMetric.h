// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSPNRMETRIC_H
#define IDSPNRMETRIC_H

@class NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSPNRMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger mechanism; // ivar: _mechanism
@property (readonly) NSString *name;
@property (nonatomic) NSInteger pnrReason; // ivar: _pnrReason
@property (readonly) Class superclass;


-(id)initWithPNRReason:(NSInteger)arg0 mechanism:(NSInteger)arg1 ;


@end


#endif