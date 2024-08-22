// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RADIOARTWORKCOLLECTION_H
#define RADIOARTWORKCOLLECTION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RadioArtworkCollection : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *artworks; // ivar: _artworks


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_artworksBySortingArtworks:(id)arg0 ;
-(id)bestArtworkForPixelSize:(struct CGSize )arg0 ;
-(id)bestArtworkForPointSize:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArtworkVariants:(id)arg0 ;
-(id)initWithArtworks:(id)arg0 ;


@end


#endif