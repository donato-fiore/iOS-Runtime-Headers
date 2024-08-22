// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIEDITORIALCARDLAYOUT_H
#define SKUIEDITORIALCARDLAYOUT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SKUILockupViewElement.h"

@interface SKUIEditorialCardLayout : NSObject

@property (readonly, nonatomic) NSArray *allLockups; // ivar: _allLockups
@property (readonly, nonatomic) SKUILockupViewElement *primaryLockup; // ivar: _primaryLockup
@property (readonly, nonatomic) CGSize primaryLockupSize; // ivar: _primaryLockupSize
@property (readonly, nonatomic) CGFloat secondaryLockupWidth; // ivar: _secondaryLockupWidth


-(id)initWithCard:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;


@end


#endif