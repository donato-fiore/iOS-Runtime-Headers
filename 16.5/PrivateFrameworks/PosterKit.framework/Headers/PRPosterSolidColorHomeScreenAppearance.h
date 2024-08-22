// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTERSOLIDCOLORHOMESCREENAPPEARANCE_H
#define PRPOSTERSOLIDCOLORHOMESCREENAPPEARANCE_H



#import "PRPosterHomeScreenAppearance.h"
#import "PRPosterColor.h"
#import "PREditorColorPickerConfiguration.h"

@interface PRPosterSolidColorHomeScreenAppearance : PRPosterHomeScreenAppearance

@property (readonly, copy, nonatomic) PRPosterColor *color; // ivar: _color
@property (readonly, copy, nonatomic) PREditorColorPickerConfiguration *colorPickerConfiguration; // ivar: _colorPickerConfiguration
@property (readonly, copy, nonatomic) PRPosterColor *effectiveColor;


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