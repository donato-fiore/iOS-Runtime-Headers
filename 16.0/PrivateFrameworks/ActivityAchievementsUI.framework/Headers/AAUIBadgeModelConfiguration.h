// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIBADGEMODELCONFIGURATION_H
#define AAUIBADGEMODELCONFIGURATION_H

@class NSArray, NSString, UIColor;

#import <Foundation/Foundation.h>


@interface AAUIBadgeModelConfiguration : NSObject

@property (retain, nonatomic) NSArray *badgeModelPaths; // ivar: _badgeModelPaths
@property (readonly, nonatomic) NSUInteger badgeShape;
@property (retain, nonatomic) NSArray *badgeTexturePaths; // ivar: _badgeTexturePaths
@property (copy, nonatomic) NSArray *enamelTriColors; // ivar: _enamelTriColors
@property (nonatomic) BOOL faceHasMetalInlay; // ivar: _faceHasMetalInlay
@property (nonatomic) CGPoint glyphPositionOffset; // ivar: _glyphPositionOffset
@property (copy, nonatomic) NSString *glyphTexturePath; // ivar: _glyphTexturePath
@property (nonatomic) CGFloat glyphTextureScale; // ivar: _glyphTextureScale
@property (copy, nonatomic) UIColor *metalColor; // ivar: _metalColor
@property (copy, nonatomic) UIColor *modelEnamelColor; // ivar: _modelEnamelColor
@property (copy, nonatomic) NSString *shapeName; // ivar: _shapeName
@property (nonatomic) BOOL unearnedUsesTwoToneEnamel; // ivar: _unearnedUsesTwoToneEnamel
@property (nonatomic) BOOL useFullColorEnamel; // ivar: _useFullColorEnamel


-(id)init;
-(id)initWithModelPaths:(id)arg0 texturePaths:(id)arg1 shapeName:(id)arg2 metalColor:(id)arg3 useFullColorEnamel:(BOOL)arg4 modelEnamelColor:(id)arg5 unearnedUsesTwoToneEnamel:(BOOL)arg6 faceHasMetalInlay:(BOOL)arg7 enamelTricolors:(id)arg8 glyphTexturePath:(id)arg9 glyphTextureScale:(CGFloat)arg10 glyphPositionOffset:(struct CGPoint )arg11 ;


@end


#endif