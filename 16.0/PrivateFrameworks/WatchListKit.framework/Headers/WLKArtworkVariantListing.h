// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKARTWORKVARIANTLISTING_H
#define WLKARTWORKVARIANTLISTING_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WLKArtworkVariantListing : NSObject

@property (readonly, copy, nonatomic) NSArray *artworkVariants; // ivar: _artworkVariants


-(id)artworkVariantOfType:(NSInteger)arg0 ;
-(id)bestArtworkVariantOfType:(NSInteger)arg0 forSize:(struct CGSize )arg1 ;
-(id)initWithArtworkDictionary:(id)arg0 ;


@end


#endif