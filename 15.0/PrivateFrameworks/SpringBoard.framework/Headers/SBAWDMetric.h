// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAWDMETRIC_H
#define SBAWDMETRIC_H

@protocol SBAWDMetricDelegate;

#import <Foundation/Foundation.h>


@interface SBAWDMetric : NSObject

@property (weak, nonatomic) NSObject<SBAWDMetricDelegate> *delegate; // ivar: _delegate


-(Class)dataClass;
-(NSUInteger)componentID;
-(NSUInteger)metricID;
-(id)configureWithData:(id)arg0 ;
-(void)_postMetric:(id)arg0 withID:(unsigned int)arg1 ;
-(void)postWithDataBuilder:(id)arg0 ;


@end


#endif