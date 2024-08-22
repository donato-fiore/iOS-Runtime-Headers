// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLUMADODGEPILLSETTINGS_H
#define MTLUMADODGEPILLSETTINGS_H

@class PTSettings;


#import "MTLumaDodgePillStyleSettings.h"

@interface MTLumaDodgePillSettings : PTSettings

@property (retain, nonatomic) MTLumaDodgePillStyleSettings *blackSettings; // ivar: _blackSettings
@property (nonatomic) CGFloat brightLumaThreshold; // ivar: _brightLumaThreshold
@property (nonatomic) CGFloat colorAddWhiteness; // ivar: _colorAddWhiteness
@property (nonatomic) NSInteger cornerMask; // ivar: _cornerMask
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat darkLumaThreshold; // ivar: _darkLumaThreshold
@property (nonatomic) CGFloat edgeSpacing; // ivar: _edgeSpacing
@property (retain, nonatomic) MTLumaDodgePillStyleSettings *graySettings; // ivar: _graySettings
@property (nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) CGFloat initialLumaThreshold; // ivar: _initialLumaThreshold
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (nonatomic) CGFloat minWidth; // ivar: _minWidth
@property (retain, nonatomic) MTLumaDodgePillStyleSettings *noneSettings; // ivar: _noneSettings
@property (retain, nonatomic) MTLumaDodgePillStyleSettings *thinSettings; // ivar: _thinSettings
@property (retain, nonatomic) MTLumaDodgePillStyleSettings *whiteSettings; // ivar: _whiteSettings


+(id)settingsControllerModule;
+(id)sharedInstance;
-(void)setDefaultValues;


@end


#endif