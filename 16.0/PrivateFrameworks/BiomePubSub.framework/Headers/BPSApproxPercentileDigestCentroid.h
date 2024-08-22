// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSAPPROXPERCENTILEDIGESTCENTROID_H
#define BPSAPPROXPERCENTILEDIGESTCENTROID_H


#import <Foundation/Foundation.h>


@interface BPSApproxPercentileDigestCentroid : NSObject

@property (nonatomic) float mean; // ivar: _mean
@property (nonatomic) unsigned int weight; // ivar: _weight


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithMeanAndWeight:(float)arg0 weight:(unsigned int)arg1 ;


@end


#endif