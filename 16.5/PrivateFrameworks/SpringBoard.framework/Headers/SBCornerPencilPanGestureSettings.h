// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCORNERPENCILPANGESTURESETTINGS_H
#define SBCORNERPENCILPANGESTURESETTINGS_H

@class PTSettings;



@interface SBCornerPencilPanGestureSettings : PTSettings

@property (nonatomic) CGFloat cornerHorizontalEdgeLength; // ivar: _cornerHorizontalEdgeLength
@property (nonatomic) CGFloat cornerVerticalEdgeLength; // ivar: _cornerVerticalEdgeLength


+(BOOL)ignoresKey:(id)arg0 ;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif