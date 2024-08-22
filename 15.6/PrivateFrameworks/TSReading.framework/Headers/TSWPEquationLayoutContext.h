// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPEQUATIONLAYOUTCONTEXT_H
#define TSWPEQUATIONLAYOUTCONTEXT_H

@class NSString;
@protocol EQKitLayoutContext;

#import <Foundation/Foundation.h>


@interface TSWPEquationLayoutContext : NSObject <EQKitLayoutContext>

 {
    *__CFString _fontName;
}


@property (nonatomic) CGFloat columnWidth; // ivar: _columnWidth
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)baseFontSize;
-(CGFloat)containerWidth;
-(id)initWithTextAttributes:(struct __CFDictionary *)arg0 columnWidth:(CGFloat)arg1 ;
-(struct __CFString *)baseFontName;
-(void)dealloc;


@end


#endif