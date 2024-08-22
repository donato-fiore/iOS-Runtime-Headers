// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGIFTTABLEVIEWSECTION_H
#define SKUIGIFTTABLEVIEWSECTION_H



#import "SKUITableViewSection.h"
#import "SKUIGiftConfiguration.h"

@interface SKUIGiftTableViewSection : SKUITableViewSection

@property (readonly, nonatomic) SKUIGiftConfiguration *giftConfiguration; // ivar: _giftConfiguration


+(id)aloneRowBackgroundImageWithSize:(struct CGSize )arg0 ;
-(id)initWithGiftConfiguration:(id)arg0 ;


@end


#endif