// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSYMBOLICON_H
#define WFSYMBOLICON_H

@class WFColor, NSString;


#import "WFIcon.h"
#import "WFIconBackground.h"

@interface WFSymbolIcon : WFIcon

@property (readonly, nonatomic) WFIconBackground *background; // ivar: _background
@property (readonly, nonatomic) WFColor *symbolColor; // ivar: _symbolColor
@property (readonly, nonatomic) NSString *symbolName; // ivar: _symbolName


+(BOOL)supportsSecureCoding;
+(id)cachedGlyphSizes;
-(BOOL)hasClearBackground;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSymbolName:(id)arg0 background:(id)arg1 ;
-(id)initWithSymbolName:(id)arg0 symbolColor:(id)arg1 background:(id)arg2 ;
-(struct CGSize )imageSizeAtPointSize:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif