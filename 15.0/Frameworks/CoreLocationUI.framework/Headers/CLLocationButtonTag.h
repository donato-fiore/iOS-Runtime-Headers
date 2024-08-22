// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLLOCATIONBUTTONTAG_H
#define CLLOCATIONBUTTONTAG_H

@class UIColor, UISSlotStyle;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLLocationButtonTag : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) CGFloat buttonHeight;
@property (readonly, nonatomic) CGFloat buttonWidth;
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (nonatomic) CGRect frame; // ivar: _frame
@property (nonatomic) NSInteger icon; // ivar: _icon
@property (nonatomic) NSInteger label; // ivar: _label
@property (nonatomic) BOOL renderedSuccessfully; // ivar: _renderedSuccessfully
@property (retain, nonatomic) UISSlotStyle *style; // ivar: _style
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(BOOL)supportsSecureCoding;
-(BOOL)contrastValidForBgColorAndFgTextWithCumulativeOpacity:(float)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLabel:(NSInteger)arg0 iconType:(NSInteger)arg1 backgroundColor:(id)arg2 tintColor:(id)arg3 cornerRadius:(CGFloat)arg4 frame:(struct CGRect )arg5 fontSize:(CGFloat)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif