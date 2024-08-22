// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKACTIVITYRINGVIEWSIZINGDIRECTIVE_H
#define _HKACTIVITYRINGVIEWSIZINGDIRECTIVE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _HKActivityRingViewSizingDirective : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGFloat outerRingOffset; // ivar: _outerRingOffset
@property (nonatomic) CGFloat ringInterspacing; // ivar: _ringInterspacing
@property (nonatomic) CGFloat ringThickness; // ivar: _ringThickness
@property (nonatomic) CGFloat width; // ivar: _width


+(id)activityRingSizingDirectiveWithIdentifier:(id)arg0 width:(CGFloat)arg1 outerRingOffset:(CGFloat)arg2 ringThickness:(CGFloat)arg3 ringInterspacing:(CGFloat)arg4 ;
+(id)sortedRingRatioDirectives;
-(id)description;


@end


#endif