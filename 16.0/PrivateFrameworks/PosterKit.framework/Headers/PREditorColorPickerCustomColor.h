// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITORCOLORPICKERCUSTOMCOLOR_H
#define PREDITORCOLORPICKERCUSTOMCOLOR_H

@class NSString;
@protocol PREditorColorPickerColor;

#import <Foundation/Foundation.h>

#import "PRPosterColor.h"

@interface PREditorColorPickerCustomColor : NSObject <PREditorColorPickerColor>



@property (readonly, copy, nonatomic) PRPosterColor *baseColor;
@property (readonly, copy, nonatomic) id *colorProvider; // ivar: _colorProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat initialVariation; // ivar: _initialVariation
@property (readonly) BOOL isCustomColor;
@property (readonly) BOOL isVibrantColor;
@property (readonly, nonatomic) PRPosterColor *leftSliderColor;
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) PRPosterColor *rightSliderColor;
@property (readonly) Class superclass;


-(id)colorWithVariation:(CGFloat)arg0 ;
-(id)displayColorWithVariation:(CGFloat)arg0 ;
-(id)initWithDefaultInitialVariation:(CGFloat)arg0 colorProvider:(id)arg1 ;
-(id)initWithInitialVariation:(CGFloat)arg0 colorProvider:(id)arg1 ;
// -(id)initWithInitialVariation:(CGFloat)arg0 colorProvider:(id)arg1 localizedName:(unk)arg2  ;


@end


#endif