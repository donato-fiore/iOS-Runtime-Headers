// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKEXPLORERCOLORPALETTE_H
#define NTKEXPLORERCOLORPALETTE_H

@class UIColor, NSString;
@protocol NTKExplorerColorPalette;


#import "NTKFaceColorPalette.h"

@interface NTKExplorerColorPalette : NTKFaceColorPalette <NTKExplorerColorPalette>



@property (readonly, nonatomic) UIColor *complication;
@property (readonly, nonatomic) UIColor *complicationPlatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIColor *deepRed;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *hands;
@property (readonly, nonatomic) UIColor *handsInlay;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *red;
@property (readonly, nonatomic) UIColor *secondHand;
@property (readonly, nonatomic) UIColor *secondHandInlay;
@property (readonly) Class superclass;


-(id)init;


@end


#endif