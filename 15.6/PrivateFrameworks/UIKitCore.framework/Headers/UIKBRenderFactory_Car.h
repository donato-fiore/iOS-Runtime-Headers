// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBRENDERFACTORY_CAR_H
#define UIKBRENDERFACTORY_CAR_H



#import "UIKBRenderFactory.h"

@interface UIKBRenderFactory_Car : UIKBRenderFactory

@property (readonly, nonatomic) CGFloat carScale;


-(CGFloat)defaultKeyFontSize;
-(CGFloat)skinnyKeyThreshold;
-(NSInteger)assetIdiom;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)activeKeyColor;
-(id)backgroundTraitsForKeyplane:(id)arg0 ;
-(id)deleteKeyImageName;
-(id)deleteOnKeyImageName;
-(id)displayContentsForKey:(id)arg0 ;
-(id)dividerColor;
-(id)enabledKeyColor;
-(id)globalKeyImageName;
-(id)highlightedKeyColor;
-(id)shiftKeyImageName;
-(id)shiftLockImageName;
-(id)shiftOnKeyImageName;
-(void)_customizeGeometry:(id)arg0 forKey:(id)arg1 contents:(id)arg2 onKeyplane:(id)arg3 ;
-(void)customizeLanguageIndicatorTraitsForTraits:(id)arg0 ;


@end


#endif