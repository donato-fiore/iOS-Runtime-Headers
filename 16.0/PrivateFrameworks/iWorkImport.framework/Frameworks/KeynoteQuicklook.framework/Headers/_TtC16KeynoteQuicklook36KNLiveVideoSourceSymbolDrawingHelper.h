// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16KEYNOTEQUICKLOOK36KNLIVEVIDEOSOURCESYMBOLDRAWINGHELPER_H
#define _TTC16KEYNOTEQUICKLOOK36KNLIVEVIDEOSOURCESYMBOLDRAWINGHELPER_H

@class NSString, UIFont;

#import <Foundation/Foundation.h>


@interface _TtC16KeynoteQuicklook36KNLiveVideoSourceSymbolDrawingHelper : NSObject {
    ? abbreviationText;
    ? lastDrawnAbbreviationTextFixedPointSize;
    ? lastDrawnAbbreviationTextBoundsSize;
    ? lastDrawnAbbreviationTextLine;
    ? lastDrawnAbbreviationTextColor;
}


@property (nonatomic, readonly) NSString *abbreviationText;
@property (nonatomic) BOOL drawsInvisibleText; // ivar: drawsInvisibleText
@property (nonatomic, readonly) NSInteger imageIdentifier; // ivar: imageIdentifier
@property (nonatomic, retain) UIFont *lastDrawnAbbreviationFont; // ivar: lastDrawnAbbreviationFont
@property (nonatomic, readonly) NSInteger tintColorIdentifier; // ivar: tintColorIdentifier


+(id)fontWithPointSize:(CGFloat)arg0 ;
+(struct CGSize )maxRasterizedSymbolSize;
-(id)init;
-(id)initWithAbbreviationText:(id)arg0 imageIdentifier:(NSInteger)arg1 tintColorIdentifier:(NSInteger)arg2 ;
-(struct CGSize )boundsSizeForPointSize:(CGFloat)arg0 ;
-(void)drawIn:(struct CGRect )arg0 context:(struct CGContext *)arg1 includeBackground:(BOOL)arg2 ;
-(void)drawWithPointSize:(CGFloat)arg0 centeredIn:(struct CGRect )arg1 context:(struct CGContext *)arg2 includeBackground:(BOOL)arg3 ;


@end


#endif