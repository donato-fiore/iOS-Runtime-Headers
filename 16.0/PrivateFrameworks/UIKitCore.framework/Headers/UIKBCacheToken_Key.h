// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKBCACHETOKEN_KEY_H
#define UIKBCACHETOKEN_KEY_H

@class NSString;


#import "UIKBCacheToken.h"

@interface UIKBCacheToken_Key : UIKBCacheToken {
    ? _style;
    NSString *_cacheDisplayString;
    NSString *_cacheSecondaryDisplayString;
    NSString *_annotationString;
    int _displayTypeHint;
    int _displayRowHint;
    CGSize _size;
    int _state;
    NSUInteger _clipCorners;
    NSUInteger _groupNeighbors;
    BOOL _usesInsets;
    UIEdgeInsets _displayInsets;
}




+(id)tokenForKey:(id)arg0 style:(struct ? )arg1 ;
+(id)tokenForKey:(id)arg0 style:(struct ? )arg1 displayInsets:(struct UIEdgeInsets )arg2 ;
-(BOOL)hasKey;
-(id)_initWithKey:(id)arg0 style:(struct ? )arg1 displayInsets:(struct UIEdgeInsets )arg2 ;
-(id)_stringWithAdditionalValues:(id)arg0 ;
-(id)string;
-(id)stringForRenderFlags:(NSInteger)arg0 lightKeyboard:(BOOL)arg1 ;
-(int)displayHint;
-(int)rowHint;
-(struct ? )styling;
-(struct CGSize )size;
-(void)annotateWithBool:(BOOL)arg0 ;
-(void)annotateWithInt:(int)arg0 ;
-(void)annotateWithString:(id)arg0 ;
-(void)resetAnnotations;
-(void)setDisplayHint:(int)arg0 ;
-(void)setRowHint:(int)arg0 ;
-(void)setSize:(struct CGSize )arg0 ;
-(void)setStyling:(struct ? )arg0 ;


@end


#endif