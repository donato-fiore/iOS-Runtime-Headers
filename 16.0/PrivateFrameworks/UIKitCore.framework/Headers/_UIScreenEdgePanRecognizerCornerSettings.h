// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCREENEDGEPANRECOGNIZERCORNERSETTINGS_H
#define _UISCREENEDGEPANRECOGNIZERCORNERSETTINGS_H

@class UISettings;



@interface _UIScreenEdgePanRecognizerCornerSettings : UISettings

@property (nonatomic) CGFloat cornerAngleWindow; // ivar: _cornerAngleWindow
@property (nonatomic) CGFloat cornerAngleWindowDegreees;
@property (nonatomic) CGFloat cornerSize; // ivar: _cornerSize


+(id)keyPathsForValuesAffectingCornerAngleWindowDegreees;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif