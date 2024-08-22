// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUIHEADPHONELEVELGROUP_H
#define HUIHEADPHONELEVELGROUP_H

@class UIView, NSMutableArray;



@interface HUIHeadphoneLevelGroup : UIView

@property (retain, nonatomic) NSMutableArray *inactiveLevels; // ivar: _inactiveLevels
@property (readonly, nonatomic) BOOL isRTL; // ivar: _isRTL
@property (retain, nonatomic) NSMutableArray *levels; // ivar: _levels
@property (readonly, nonatomic) NSUInteger pipFlagIndex; // ivar: _pipFlagIndex


-(id)init;
-(void)dealloc;
-(void)layoutLevels;
-(void)layoutSubviews;
-(void)updateWithExposure:(CGFloat)arg0 withThreshold:(NSUInteger)arg1 ;


@end


#endif