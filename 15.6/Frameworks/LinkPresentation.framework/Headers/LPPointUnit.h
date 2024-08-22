// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPPOINTUNIT_H
#define LPPOINTUNIT_H

@protocol LPCSSText, LPHTMLAttributeText;

#import <Foundation/Foundation.h>


@interface LPPointUnit : NSObject <LPCSSText, LPHTMLAttributeText>



@property (readonly, nonatomic) CGFloat value; // ivar: _value


+(id)zero;
-(id)_lp_CSSText;
-(id)_lp_HTMLAttributeText;
-(id)initWithValue:(CGFloat)arg0 ;


@end


#endif