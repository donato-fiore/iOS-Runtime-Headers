// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMEDIALIBRARYARTWORK_H
#define MPMEDIALIBRARYARTWORK_H

@class ML3Artwork, NSDictionary, NSURL, NSArray;

#import <Foundation/Foundation.h>

#import "MPMediaLibraryArtworkRequest.h"

@interface MPMediaLibraryArtwork : NSObject

@property (retain, nonatomic) ML3Artwork *artwork; // ivar: _artwork
@property (weak, nonatomic) MPMediaLibraryArtworkRequest *artworkRequest; // ivar: _artworkRequest
@property (copy, nonatomic) NSDictionary *effectsMetadata;
@property (readonly, copy, nonatomic) NSURL *originalFileURL;
@property (readonly, nonatomic) os_unfair_lock_s stateLock; // ivar: _stateLock
@property (readonly, nonatomic) NSArray *validSizes; // ivar: _validSizes


+(BOOL)artworkExistsForRequest:(id)arg0 ;
+(BOOL)needsToFetchArtworkForRequest:(id)arg0 ;
+(id)availableArtworkWithRequest:(id)arg0 ;
+(void)cancelFetchingArtworkForRequest:(id)arg0 ;
+(void)fetchArtworkForRequest:(id)arg0 completionHandler:(id)arg1 ;
+(void)fetchArtworkInfoForRequest:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)imageFileURLForEffect:(id)arg0 ;
-(id)imageFileURLForSize:(struct CGSize )arg0 ;
-(id)init;


@end


#endif