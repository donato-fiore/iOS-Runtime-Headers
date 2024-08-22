// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSDASHBOARDQUICKACTIONSBUTTONSETTINGS_H
#define CSDASHBOARDQUICKACTIONSBUTTONSETTINGS_H

@class PTSettings;



@interface CSDashBoardQuickActionsButtonSettings : PTSettings

@property (nonatomic) CGFloat bottomOutset; // ivar: _bottomOutset
@property (nonatomic) BOOL colorsBackground; // ivar: _colorsBackground
@property (nonatomic) CGFloat leadingOutset; // ivar: _leadingOutset
@property (nonatomic) BOOL showsButtons; // ivar: _showsButtons
@property (nonatomic) CGFloat topOutset; // ivar: _topOutset
@property (nonatomic) CGFloat trailingOutset; // ivar: _trailingOutset


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif