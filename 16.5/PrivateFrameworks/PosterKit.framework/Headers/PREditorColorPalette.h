// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITORCOLORPALETTE_H
#define PREDITORCOLORPALETTE_H

@class NSArray, NSString;
@protocol BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PREditorColorPalette : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding>



@property (readonly) NSArray *colors; // ivar: _colors
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasGeneratedPickerColors; // ivar: _hasGeneratedPickerColors
@property (readonly) NSUInteger hash;
@property (readonly) BOOL includesObjectsOfTypePRPosterColor; // ivar: _includesObjectsOfTypePRPosterColor
@property (readonly, copy) NSString *localizedName; // ivar: _localizedName
@property (readonly) NSUInteger paletteType; // ivar: _paletteType
@property (retain) NSArray *pickerColors; // ivar: _pickerColors
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)additionalColorsForExtendedPalette;
+(id)extendedPalette;
+(id)standardPalette;
+(id)standardPaletteColors;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldShowColorWell;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColors:(id)arg0 localizedName:(id)arg1 showsColorWell:(BOOL)arg2 ;
-(id)initWithPickerColors:(id)arg0 colors:(id)arg1 localizedName:(id)arg2 paletteType:(NSUInteger)arg3 showsColorWell:(BOOL)arg4 ;
-(id)initWithPickerColors:(id)arg0 localizedName:(id)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generatePickerColorsIfNeededForContext:(NSUInteger)arg0 ;


@end


#endif