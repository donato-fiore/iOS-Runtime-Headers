// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLOGCOLORIZER_H
#define AXLOGCOLORIZER_H


#import <Foundation/Foundation.h>


@interface AXLogColorizer : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic) AXLogColorTheme colorTheme; // ivar: _colorTheme
@property (nonatomic, getter=isManagedBySettings) BOOL managedBySettings; // ivar: _managedBySettings
@property (nonatomic) BOOL preferDarkColors; // ivar: _preferDarkColors


+(char *)ansiColorSeqForAXLogColor:(NSInteger)arg0 ;
+(id)coloredString:(id)arg0 withColor:(NSInteger)arg1 ;
+(id)colorizeStringIfEnabled:(id)arg0 withColor:(NSInteger)arg1 ;
+(id)defaultColorizer;
+(struct AXLogColorTheme )defaultDarkColorsTheme;
+(struct AXLogColorTheme )defaultLightColorsTheme;
-(id)_initAndManageWithSettings:(BOOL)arg0 ;
-(id)blueString:(id)arg0 ;
-(id)cyanString:(id)arg0 ;
-(id)debugString:(id)arg0 ;
-(id)description;
-(id)errorString:(id)arg0 ;
-(id)greenString:(id)arg0 ;
-(id)greyString:(id)arg0 ;
-(id)infoString:(id)arg0 ;
-(id)init;
-(id)magentaString:(id)arg0 ;
-(id)redString:(id)arg0 ;
-(id)warningString:(id)arg0 ;
-(id)whiteOrBlackString:(id)arg0 ;
-(id)yellowString:(id)arg0 ;
-(void)_updateSettingsFromUserPrefs;


@end


#endif