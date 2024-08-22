// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPITUNESMEDIATVSEASONUNRESOLVEDMETADATA_H
#define LPITUNESMEDIATVSEASONUNRESOLVEDMETADATA_H

@class NSString;
@protocol LPiTunesMediaUnresolvedMetadata;

#import <Foundation/Foundation.h>

#import "LPiTunesMediaAsset.h"

@interface LPiTunesMediaTVSeasonUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>



@property (retain, nonatomic) LPiTunesMediaAsset *artwork; // ivar: _artwork
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *genre; // ivar: _genre
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (readonly) Class superclass;


-(id)assetsToFetch;
-(id)resolve;


@end


#endif