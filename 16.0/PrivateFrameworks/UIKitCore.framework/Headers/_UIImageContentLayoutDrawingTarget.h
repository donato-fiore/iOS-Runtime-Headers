// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIIMAGECONTENTLAYOUTDRAWINGTARGET_H
#define _UIIMAGECONTENTLAYOUTDRAWINGTARGET_H

@class NSString;
@protocol _UIImageContentEffect, _UIImageContentLayoutTarget;

#import <Foundation/Foundation.h>

#import "UITraitCollection.h"

@interface _UIImageContentLayoutDrawingTarget : NSObject <_UIImageContentEffect, _UIImageContentLayoutTarget>



@property (readonly, nonatomic) BOOL _hasContentGravity;
@property (readonly, nonatomic) BOOL _layoutShouldFlipHorizontalOrientations;
@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) NSInteger contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat preferredContentScaleFactor; // ivar: _preferredContentScaleFactor
@property (readonly, nonatomic) NSInteger semanticContentAttribute;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITraitCollection *traitCollection;


-(NSInteger)_effectiveRenderingModeForSource:(id)arg0 symbolConfiguration:(id)arg1 ;
-(id)_effectForRenderingSource:(id)arg0 ;
-(id)_renditionForSource:(id)arg0 size:(struct CGSize )arg1 symbolConfiguration:(id)arg2 withRenditionResult:(id)arg3 lazy:(BOOL)arg4 ;
-(id)_symbolConfigurationForSource:(id)arg0 ;


@end


#endif