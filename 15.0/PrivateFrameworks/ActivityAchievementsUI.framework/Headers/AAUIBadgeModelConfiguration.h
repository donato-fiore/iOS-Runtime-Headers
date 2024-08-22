// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIBADGEMODELCONFIGURATION_H
#define AAUIBADGEMODELCONFIGURATION_H

@class NSString, NSArray, UIColor;

#import <Foundation/Foundation.h>


@interface AAUIBadgeModelConfiguration : NSObject

@property (copy, nonatomic) NSString *badgeModelPath; // ivar: _badgeModelPath
@property (readonly, nonatomic) NSUInteger badgeShape;
@property (copy, nonatomic) NSString *badgeTexturePath; // ivar: _badgeTexturePath
@property (copy, nonatomic) NSArray *enamelTriColors; // ivar: _enamelTriColors
@property (nonatomic) BOOL faceHasMetalInlay; // ivar: _faceHasMetalInlay
@property (copy, nonatomic) UIColor *metalColor; // ivar: _metalColor
@property (copy, nonatomic) UIColor *modelEnamelColor; // ivar: _modelEnamelColor
@property (copy, nonatomic) NSString *shapeName; // ivar: _shapeName
@property (nonatomic) BOOL unearnedUsesTwoToneEnamel; // ivar: _unearnedUsesTwoToneEnamel
@property (nonatomic) BOOL useFullColorEnamel; // ivar: _useFullColorEnamel


+(id)configurationWithModelPath:(id)arg0 texturePath:(id)arg1 plistPath:(id)arg2 ;
-(id)init;
-(id)initWithModelPath:(id)arg0 texturePath:(id)arg1 shapeName:(id)arg2 metalColor:(id)arg3 useFullColorEnamel:(BOOL)arg4 modelEnamelColor:(id)arg5 unearnedUsesTwoToneEnamel:(BOOL)arg6 faceHasMetalInlay:(BOOL)arg7 enamelTricolors:(id)arg8 ;


@end


#endif