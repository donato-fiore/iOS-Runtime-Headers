// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKSIZEDTRANSITARTWORK_H
#define MKSIZEDTRANSITARTWORK_H

@class NSString;
@protocol MKArtworkImageSource, GEOTransitArtworkDataSource;

#import <Foundation/Foundation.h>

#import "MKArtworkDataSourceCache.h"

@interface MKSizedTransitArtwork : NSObject <MKArtworkImageSource>



@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *artwork; // ivar: _artwork
@property (retain, nonatomic) MKArtworkDataSourceCache *artworkCache; // ivar: _artworkCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger fallbackShieldSize; // ivar: _fallbackShieldSize
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger shieldSize; // ivar: _shieldSize
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTransitArtworkViewMode:(id)arg0 ;
-(id)badgeImageToDisplayWithScreenScale:(CGFloat)arg0 nightMode:(BOOL)arg1 ;
-(id)imageToDisplayWithScreenScale:(CGFloat)arg0 nightMode:(BOOL)arg1 ;
-(id)initWithArtwork:(id)arg0 shieldSize:(NSInteger)arg1 ;
-(id)initWithArtwork:(id)arg0 shieldSize:(NSInteger)arg1 artworkCache:(id)arg2 ;
-(id)initWithArtwork:(id)arg0 shieldSize:(NSInteger)arg1 fallbackShieldSize:(NSInteger)arg2 artworkCache:(id)arg3 ;


@end


#endif