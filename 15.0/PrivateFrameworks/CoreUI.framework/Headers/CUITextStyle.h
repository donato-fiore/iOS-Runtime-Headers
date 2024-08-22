// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUITEXTSTYLE_H
#define CUITEXTSTYLE_H

@class NSString;


#import "CUINamedLookup.h"

@interface CUITextStyle : CUINamedLookup

@property (readonly, nonatomic) NSInteger alignment; // ivar: _alignment
@property (readonly, nonatomic) NSString *fontName; // ivar: _fontName
@property (readonly, nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (readonly, nonatomic) CGFloat maxPointSize; // ivar: _maxPointSize
@property (readonly, nonatomic) CGFloat minPointSize; // ivar: _minPointSize
@property (readonly, nonatomic) NSInteger scalingStyle; // ivar: _scalingStyle


-(id)initWithName:(id)arg0 usingRenditionKey:(id)arg1 fromTheme:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif