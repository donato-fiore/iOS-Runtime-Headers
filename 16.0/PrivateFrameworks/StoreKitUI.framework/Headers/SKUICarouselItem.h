// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUICAROUSELITEM_H
#define SKUICAROUSELITEM_H

@class NSString;
@protocol SKUIArtworkProviding;

#import <Foundation/Foundation.h>

#import "SKUILink.h"

@interface SKUICarouselItem : NSObject

@property (readonly, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (retain, nonatomic) NSObject<SKUIArtworkProviding> *artworkProvider; // ivar: _artworkProvider
@property (readonly, nonatomic) NSInteger carouselItemIdentifier; // ivar: _carouselItemIdentifier
@property (readonly, nonatomic) SKUILink *link; // ivar: _link


-(id)artworkForSize:(struct CGSize )arg0 ;
-(id)description;
-(id)initWithComponentContext:(id)arg0 ;


@end


#endif