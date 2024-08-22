// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCLOUDTHROTTLINGLEVEL_H
#define ICCLOUDTHROTTLINGLEVEL_H


#import <Foundation/Foundation.h>


@interface ICCloudThrottlingLevel : NSObject

@property (nonatomic) CGFloat batchInterval; // ivar: _batchInterval
@property (nonatomic) NSUInteger numberOfBatches; // ivar: _numberOfBatches


-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithBatchInterval:(CGFloat)arg0 numberOfBatches:(NSUInteger)arg1 ;


@end


#endif