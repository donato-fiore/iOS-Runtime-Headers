// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHTEXTLAYOUTPROPERTIES_H
#define TSCHTEXTLAYOUTPROPERTIES_H


#import <Foundation/Foundation.h>


@interface TSCHTextLayoutProperties : NSObject

@property (nonatomic) CGSize maxSize; // ivar: _maxSize
@property (nonatomic) CGSize minSize; // ivar: _minSize
@property (nonatomic) int textFlags; // ivar: _textFlags


+(id)defaultPropertiesForWrapWidth:(CGFloat)arg0 ;
+(id)placeTitleAtCenterPropertiesForWrapWidth:(CGFloat)arg0 ;
-(id)initWithTextFlags:(int)arg0 minSize:(struct CGSize )arg1 maxSize:(struct CGSize )arg2 ;


@end


#endif