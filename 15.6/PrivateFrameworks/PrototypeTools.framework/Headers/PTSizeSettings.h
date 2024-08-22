// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTSIZESETTINGS_H
#define PTSIZESETTINGS_H



#import "PTSettings.h"

@interface PTSizeSettings : PTSettings

@property (nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) CGSize sizeValue;
@property (nonatomic) CGFloat width; // ivar: _width


+(BOOL)ignoresKey:(id)arg0 ;
+(id)settingsControllerModule;
-(id)drillDownSummary;


@end


#endif