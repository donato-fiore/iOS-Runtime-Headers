// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPPADDING_H
#define LPPADDING_H

@protocol LPCSSText, NSCopying;

#import <Foundation/Foundation.h>

#import "LPPointUnit.h"

@interface LPPadding : NSObject <LPCSSText, NSCopying>



@property (retain, nonatomic) LPPointUnit *bottom; // ivar: _bottom
@property (retain, nonatomic) LPPointUnit *leading; // ivar: _leading
@property (retain, nonatomic) LPPointUnit *top; // ivar: _top
@property (retain, nonatomic) LPPointUnit *trailing; // ivar: _trailing


-(id)_lp_CSSText;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(struct UIEdgeInsets )asInsetsForLTR:(BOOL)arg0 ;


@end


#endif