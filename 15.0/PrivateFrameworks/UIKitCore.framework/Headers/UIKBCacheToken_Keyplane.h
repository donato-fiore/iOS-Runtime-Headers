// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBCACHETOKEN_KEYPLANE_H
#define UIKBCACHETOKEN_KEYPLANE_H

@class NSString;


#import "UIKBCacheToken.h"

@interface UIKBCacheToken_Keyplane : UIKBCacheToken {
    CGSize _size;
    ? _style;
    NSString *_geometrySetName;
    NSString *_keySetName;
    NSString *_cachedGestureKeySetName;
    NSString *_annotations;
    NSString *_locale;
}




+(id)tokenForKeyplane:(id)arg0 ;
-(BOOL)isUsableForCacheToken:(id)arg0 withRenderFlags:(NSInteger)arg1 ;
-(id)_initWithKeyplane:(id)arg0 keylayout:(id)arg1 ;
-(id)stringForSplitState:(BOOL)arg0 handBias:(NSInteger)arg1 ;
-(struct ? )styling;
-(struct CGSize )size;
-(void)annotateWithBool:(BOOL)arg0 ;
-(void)annotateWithInt:(int)arg0 ;
-(void)dealloc;
-(void)setSize:(struct CGSize )arg0 ;
-(void)setStyling:(struct ? )arg0 ;


@end


#endif