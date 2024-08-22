// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUISYMBOLIMAGE_H
#define SEARCHUISYMBOLIMAGE_H

@class UIFont, NSString;


#import "SearchUIImage.h"

@interface SearchUISymbolImage : SearchUIImage

@property int backgroundColor; // ivar: _backgroundColor
@property NSInteger preferredFill; // ivar: _preferredFill
@property int primaryColor; // ivar: _primaryColor
@property BOOL punchThroughBackground; // ivar: _punchThroughBackground
@property int secondaryColor; // ivar: _secondaryColor
@property (retain) UIFont *symbolFont; // ivar: _symbolFont
@property (retain) NSString *symbolName; // ivar: _symbolName
@property NSInteger symbolScale; // ivar: _symbolScale
@property NSInteger symbolWeight; // ivar: _symbolWeight


+(id)chevronImage;
+(id)uiImageWithSymbolName:(id)arg0 ;
+(id)uiImageWithSymbolName:(id)arg0 font:(id)arg1 scale:(NSInteger)arg2 ;
+(id)uiImageWithSymbolName:(id)arg0 font:(id)arg1 scale:(NSInteger)arg2 weight:(NSInteger)arg3 isTemplate:(BOOL)arg4 ;
+(id)uiImageWithSymbolName:(id)arg0 font:(id)arg1 scale:(NSInteger)arg2 weight:(NSInteger)arg3 isTemplate:(BOOL)arg4 primaryColor:(int)arg5 secondaryColor:(int)arg6 appearance:(id)arg7 ;
+(id)uiImageWithSymbolName:(id)arg0 font:(id)arg1 scale:(NSInteger)arg2 weight:(NSInteger)arg3 isTemplate:(BOOL)arg4 primaryColor:(int)arg5 secondaryColor:(int)arg6 appearance:(id)arg7 preferredFill:(NSInteger)arg8 ;
-(BOOL)drawsOnBackground;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)aspectRatio;
-(NSUInteger)hash;
-(id)initWithSFImage:(id)arg0 ;
-(id)initWithSymbolName:(id)arg0 ;
-(id)initWithSymbolName:(id)arg0 font:(id)arg1 scale:(NSInteger)arg2 ;
-(id)initWithSymbolName:(id)arg0 font:(id)arg1 scale:(NSInteger)arg2 weight:(NSInteger)arg3 ;
-(id)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 ;
-(int)defaultCornerRoundingStyle;
-(void)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif