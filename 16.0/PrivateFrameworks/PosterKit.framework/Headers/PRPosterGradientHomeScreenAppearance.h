// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERGRADIENTHOMESCREENAPPEARANCE_H
#define PRPOSTERGRADIENTHOMESCREENAPPEARANCE_H

@class NSArray;


#import "PRPosterHomeScreenAppearance.h"
#import "PRPosterColor.h"
#import "PREditorColorPickerConfiguration.h"

@interface PRPosterGradientHomeScreenAppearance : PRPosterHomeScreenAppearance

@property (readonly, copy, nonatomic) PRPosterColor *color; // ivar: _color
@property (readonly, copy, nonatomic) PREditorColorPickerConfiguration *colorPickerConfiguration; // ivar: _colorPickerConfiguration
@property (readonly, copy, nonatomic) PRPosterColor *effectiveColor;
@property (readonly, copy, nonatomic) NSArray *gradientColors;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColor:(id)arg0 colorPickerConfiguration:(id)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif