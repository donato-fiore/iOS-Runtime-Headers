// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITORCOLORPICKERCONFIGURATION_H
#define PREDITORCOLORPICKERCONFIGURATION_H

@class NSString, NSArray;
@protocol BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PREditorColorPalette.h"

@interface PREditorColorPickerConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding, NSCopying>



@property (retain, nonatomic) PREditorColorPalette *colorPalette; // ivar: _colorPalette
@property (nonatomic) NSUInteger colorWellDisplayMode; // ivar: _colorWellDisplayMode
@property (nonatomic) NSUInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) BOOL includesObjectsOfTypePRPickerColor; // ivar: _includesObjectsOfTypePRPickerColor
@property (copy, nonatomic) NSString *prompt; // ivar: _prompt
@property (copy, nonatomic) id *selectedColor; // ivar: _selectedColor
@property (nonatomic) BOOL showsSlider; // ivar: _showsSlider
@property (copy, nonatomic) NSArray *suggestedColors; // ivar: _suggestedColors
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 prompt:(id)arg1 selectedColor:(id)arg2 suggestedColors:(id)arg3 colorPalette:(id)arg4 colorWellDisplayMode:(NSUInteger)arg5 showsSlider:(BOOL)arg6 context:(NSUInteger)arg7 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)didUpdateColors;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif