// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDRAWERVELOCITYFILTER_H
#define WFDRAWERVELOCITYFILTER_H


#import <Foundation/Foundation.h>


@interface WFDrawerVelocityFilter : NSObject

@property (readonly, nonatomic) CGFloat calculatedVelocity;
@property (nonatomic) ? currentSample; // ivar: _currentSample
@property (nonatomic) ? previousSample; // ivar: _previousSample
@property (nonatomic) CGFloat previousTime; // ivar: _previousTime
@property (nonatomic) CGFloat previousValue; // ivar: _previousValue


-(void)addSample:(CGFloat)arg0 ;
-(void)resetWithValue:(CGFloat)arg0 ;


@end


#endif