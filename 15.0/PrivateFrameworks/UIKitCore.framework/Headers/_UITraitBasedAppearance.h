// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITRAITBASEDAPPEARANCE_H
#define _UITRAITBASEDAPPEARANCE_H

@class UIAppearance;


#import "UITraitCollection.h"

@interface _UITraitBasedAppearance : UIAppearance {
    UITraitCollection *_traitCollection;
}




+(BOOL)_hasAnyCustomizations;
+(BOOL)_hasCustomizationsForTraitCollection:(id)arg0 class:(Class)arg1 guideClass:(Class)arg2 ;
+(id)_appearanceForTraitCollection:(id)arg0 forClass:(Class)arg1 withContainerList:(id)arg2 ;
+(void)_setHasAnyCustomizations;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg0 ;
-(id)_traitCollection;
-(void)_invalidateAppearanceInWindow:(id)arg0 ;
-(void)dealloc;


@end


#endif