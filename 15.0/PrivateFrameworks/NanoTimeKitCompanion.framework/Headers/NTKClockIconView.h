// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCLOCKICONVIEW_H
#define NTKCLOCKICONVIEW_H

@class UIView;



@interface NTKClockIconView : UIView

@property (nonatomic) CGFloat fullDiameter; // ivar: _fullDiameter
@property (nonatomic) BOOL paused; // ivar: _paused


-(id)borrowCircleView;
-(id)borrowTimeView;
-(void)restoreBorrowedViews;


@end


#endif