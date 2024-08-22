// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIIMAGECONTENTLAYOUTWEAKEFFECT_H
#define _UIIMAGECONTENTLAYOUTWEAKEFFECT_H

@class NSString;
@protocol _UIImageContentEffect;

#import <Foundation/Foundation.h>

#import "UITraitCollection.h"

@interface _UIImageContentLayoutWeakEffect : NSObject <_UIImageContentEffect>

 {
    id<_UIImageContentEffect> *_weakEffect;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITraitCollection *traitCollection;


-(NSInteger)_effectiveRenderingModeForSource:(id)arg0 symbolConfiguration:(id)arg1 ;
-(id)_renditionForSource:(id)arg0 size:(struct CGSize )arg1 symbolConfiguration:(id)arg2 withRenditionResult:(id)arg3 lazy:(BOOL)arg4 ;
-(id)_symbolConfigurationForSource:(id)arg0 ;


@end


#endif