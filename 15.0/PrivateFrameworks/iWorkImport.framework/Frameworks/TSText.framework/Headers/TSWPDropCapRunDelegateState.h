// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPDROPCAPRUNDELEGATESTATE_H
#define TSWPDROPCAPRUNDELEGATESTATE_H


#import <Foundation/Foundation.h>

#import "TSWPDropCapAdornment.h"

@interface TSWPDropCapRunDelegateState : NSObject

@property (retain, nonatomic) TSWPDropCapAdornment *adornment; // ivar: _adornment
@property (nonatomic) _NSRange characterRange; // ivar: _characterRange


-(id)initWithCharacterRange:(struct _NSRange )arg0 adornment:(id)arg1 ;


@end


#endif