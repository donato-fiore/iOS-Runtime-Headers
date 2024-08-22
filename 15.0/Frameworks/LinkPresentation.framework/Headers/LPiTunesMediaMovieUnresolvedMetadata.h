// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPITUNESMEDIAMOVIEUNRESOLVEDMETADATA_H
#define LPITUNESMEDIAMOVIEUNRESOLVEDMETADATA_H

@class NSString, NSArray;
@protocol LPiTunesMediaUnresolvedMetadata;

#import <Foundation/Foundation.h>

#import "LPiTunesMediaAsset.h"

@interface LPiTunesMediaMovieUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>



@property (retain, nonatomic) LPiTunesMediaAsset *artwork; // ivar: _artwork
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *offers; // ivar: _offers
@property (copy, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (readonly) Class superclass;


-(id)assetsToFetch;
-(id)resolve;


@end


#endif