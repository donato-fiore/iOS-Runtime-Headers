// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCURATIONTRAITCONTAINER_H
#define PUCURATIONTRAITCONTAINER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PUCurationTraitContainer : NSObject

@property (readonly, nonatomic) NSString *actionLabel; // ivar: _actionLabel
@property (readonly, nonatomic) CGFloat highPrecisionOperatingPoint; // ivar: _highPrecisionOperatingPoint
@property (readonly, nonatomic) CGFloat highRecallOperatingPoint; // ivar: _highRecallOperatingPoint
@property (readonly, nonatomic) CGFloat operatingPoint; // ivar: _operatingPoint
@property (readonly, nonatomic) short value; // ivar: _value


-(id)initWithLabel:(id)arg0 traitValue:(short)arg1 highPrecision:(CGFloat)arg2 operatingPoint:(CGFloat)arg3 highRecall:(CGFloat)arg4 ;


@end


#endif