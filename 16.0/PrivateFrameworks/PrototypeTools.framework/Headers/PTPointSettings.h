// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTPOINTSETTINGS_H
#define PTPOINTSETTINGS_H



#import "PTSettings.h"

@interface PTPointSettings : PTSettings

@property (nonatomic) CGPoint pointValue;
@property (nonatomic) CGFloat x; // ivar: _x
@property (nonatomic) CGFloat y; // ivar: _y


+(BOOL)ignoresKey:(id)arg0 ;
+(id)settingsControllerModule;


@end


#endif