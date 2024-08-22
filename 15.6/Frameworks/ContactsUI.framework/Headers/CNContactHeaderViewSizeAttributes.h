// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTHEADERVIEWSIZEATTRIBUTES_H
#define CNCONTACTHEADERVIEWSIZEATTRIBUTES_H


#import <Foundation/Foundation.h>


@interface CNContactHeaderViewSizeAttributes : NSObject

@property (nonatomic) CGFloat _maxHeight; // ivar: __maxHeight
@property (nonatomic) CGFloat _minHeight; // ivar: __minHeight
@property (nonatomic) CGFloat maxNavbarTitleOffset; // ivar: _maxNavbarTitleOffset
@property (nonatomic) CGFloat minNavbarTitleOffset; // ivar: _minNavbarTitleOffset
@property (nonatomic) CGFloat photoMaxBottomMargin; // ivar: _photoMaxBottomMargin
@property (nonatomic) CGFloat photoMaxHeight; // ivar: _photoMaxHeight
@property (nonatomic) CGFloat photoMaxTopMargin; // ivar: _photoMaxTopMargin
@property (nonatomic) CGFloat photoMinBottomMargin; // ivar: _photoMinBottomMargin
@property (nonatomic) CGFloat photoMinHeight; // ivar: _photoMinHeight
@property (nonatomic) CGFloat photoMinTopMargin; // ivar: _photoMinTopMargin


+(id)defaultAttributes;
+(id)displayAttributes;
+(id)displayAttributesWithNavBar;
+(id)editingAttributes;
+(id)editingAttributesWithNavBar;
-(CGFloat)maxHeight;
-(CGFloat)minHeight;
-(CGFloat)navbarTitleOffsetWithPercentMax:(CGFloat)arg0 ;
-(CGFloat)photoBottomMarginWithPercentMax:(CGFloat)arg0 ;
-(CGFloat)photoHeightWithPercentMax:(CGFloat)arg0 ;
-(CGFloat)photoTopMarginWithPercentMax:(CGFloat)arg0 ;
-(CGFloat)valueBetweenMin:(CGFloat)arg0 max:(CGFloat)arg1 percentMax:(CGFloat)arg2 ;
-(id)init;


@end


#endif