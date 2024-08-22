// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCOFFERPRESENTERVIEWSTATE_H
#define ASCOFFERPRESENTERVIEWSTATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ASCOfferMetadata.h"
#import "ASCOfferTheme.h"

@interface ASCOfferPresenterViewState : NSObject <NSCopying>



@property (readonly, copy, nonatomic) ASCOfferMetadata *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) ASCOfferTheme *theme; // ivar: _theme


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMetadata:(id)arg0 theme:(id)arg1 ;


@end


#endif