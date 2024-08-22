// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADDRAWINGTHEME_H
#define OADDRAWINGTHEME_H

@protocol OADColorPalette;

#import <Foundation/Foundation.h>

#import "OADColorContext.h"
#import "OADColorMap.h"
#import "OADColorScheme.h"
#import "OADFontScheme.h"
#import "OADStyleMatrix.h"

@interface OADDrawingTheme : NSObject

@property (readonly, nonatomic) OADColorContext *colorContext; // ivar: mColorContext
@property (readonly, nonatomic) OADColorMap *colorMap;
@property (readonly, nonatomic) NSObject<OADColorPalette> *colorPalette;
@property (readonly, nonatomic) OADColorScheme *colorScheme;
@property (readonly, nonatomic) OADFontScheme *fontScheme; // ivar: mFontScheme
@property (readonly, nonatomic) OADStyleMatrix *styleMatrix; // ivar: mStyleMatrix


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithStyleMatrix:(id)arg0 fontScheme:(id)arg1 colorScheme:(id)arg2 colorMap:(id)arg3 colorPalette:(id)arg4 ;
-(id)initWithTheme:(id)arg0 colorMap:(id)arg1 colorPalette:(id)arg2 ;
-(void)applyThemeOverrides:(id)arg0 colorMapOverride:(id)arg1 ;


@end


#endif