// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADCOLORCONTEXT_H
#define OADCOLORCONTEXT_H

@protocol OADColorPalette;

#import <Foundation/Foundation.h>

#import "OADColorMap.h"
#import "OADColorScheme.h"

@interface OADColorContext : NSObject

@property (readonly, nonatomic) OADColorMap *map; // ivar: mMap
@property (retain, nonatomic) NSObject<OADColorPalette> *palette; // ivar: mPalette
@property (readonly, nonatomic) OADColorScheme *scheme; // ivar: mScheme


+(id)colorContextWithScheme:(id)arg0 map:(id)arg1 palette:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithScheme:(id)arg0 map:(id)arg1 palette:(id)arg2 ;
-(void)applyThemeOverrides:(id)arg0 colorMapOverride:(id)arg1 ;


@end


#endif