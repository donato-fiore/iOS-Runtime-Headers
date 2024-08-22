// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PIDISPARITYSAMPLERESULT_H
#define _PIDISPARITYSAMPLERESULT_H

@class NURenderResult, NSString;
@protocol PIDisparitySampleResult, NURenderStatistics;



@interface _PIDisparitySampleResult : NURenderResult <PIDisparitySampleResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float sampledDisparityValue; // ivar: _sampledDisparityValue
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;


-(id)initWithDisparityValue:(float)arg0 ;


@end


#endif