// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREDEEMITEM_H
#define SKUIREDEEMITEM_H

@class NSString;
@protocol NSSecureCoding, SKUIArtworkProviding;


#import "SKUIItem.h"

@interface SKUIRedeemItem : SKUIItem <NSSecureCoding>



@property (retain, nonatomic) NSObject<SKUIArtworkProviding> *artworks; // ivar: _artworks
@property (nonatomic) NSInteger itemIdentifier;
@property (nonatomic) NSInteger itemKind;
@property (retain, nonatomic) NSString *title;


+(BOOL)supportsSecureCoding;
-(id)artworkURLForSize:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)largestArtworkURL;
-(struct _NSRange )ageBandRange;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif