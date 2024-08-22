// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TITLEDEFINITION_H
#define TITLEDEFINITION_H

@class UIColor, NSString, NSDictionary, PVEffect;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TitleDefinition : NSObject <NSCopying>



@property (nonatomic) int anchorLocalOffset; // ivar: _anchorLocalOffset
@property (nonatomic, getter=isAnchorLocalOffsetExplicitlySet) BOOL anchorLocalOffsetExplicitlySet; // ivar: _anchorLocalOffsetExplicitlySet
@property (nonatomic) int anchorTargetOffset; // ivar: _anchorTargetOffset
@property (nonatomic, getter=isAnchorTargetOffsetExplicitlySet) BOOL anchorTargetOffsetExplicitlySet; // ivar: _anchorTargetOffsetExplicitlySet
@property (readonly, nonatomic) int animationOutDuration;
@property (nonatomic) BOOL audioEnabled; // ivar: _audioEnabled
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) NSString *displayName;
@property (nonatomic) int duration; // ivar: _duration
@property (nonatomic, getter=isDurationExplicitlySet) BOOL durationExplicitlySet; // ivar: _durationExplicitlySet
@property (retain, nonatomic) NSDictionary *extendedDefinition; // ivar: _extendedDefinition
@property (readonly, nonatomic, getter=isGeneric) BOOL generic;
@property (nonatomic) int introFadeDuration; // ivar: _introFadeDuration
@property (readonly, nonatomic, getter=isMotion) BOOL motion;
@property (readonly, nonatomic) int nominalOverallDuration;
@property (nonatomic) int outroFadeDuration; // ivar: _outroFadeDuration
@property (retain, nonatomic) UIColor *primaryColor; // ivar: _primaryColor
@property (retain, nonatomic) UIColor *secondaryColor; // ivar: _secondaryColor
@property (nonatomic) BOOL temporarilyDisabled; // ivar: _temporarilyDisabled
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) NSString *text2; // ivar: _text2
@property (retain, nonatomic) NSString *text3; // ivar: _text3
@property (readonly, nonatomic) PVEffect *titleEffect; // ivar: _titleEffect
@property (readonly, copy, nonatomic) NSString *titleEffectID;
@property (copy, nonatomic) NSDictionary *titleEffectSettings; // ivar: _titleEffectSettings
@property (readonly, nonatomic) int titleGroup;
@property (retain, nonatomic) NSString *titleName; // ivar: _titleName
@property (readonly, nonatomic) int titleType;


+(id)displayNameForTitleName:(id)arg0 ;
+(id)effectIDForTitleName:(id)arg0 ;
+(id)objectFromPlist:(id)arg0 inProject:(id)arg1 ;
+(id)titleDefinitionPlaceholderForTheme:(id)arg0 ;
+(id)titleNameFromTitleStyleRoot:(id)arg0 titleType:(int)arg1 ;
+(id)titleStyleDisplayNameForTitleName:(id)arg0 themeID:(id)arg1 ;
+(id)titleStyleRootForTitleName:(id)arg0 ;
+(int)titleGroupForTitleName:(id)arg0 ;
+(int)titleTypeForTitleName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTitleName:(id)arg0 ;
-(id)plistRepresentation;
-(void)updateWithTitleDefinition:(id)arg0 ;


@end


#endif