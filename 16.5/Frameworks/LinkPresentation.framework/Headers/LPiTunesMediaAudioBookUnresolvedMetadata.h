// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPITUNESMEDIAAUDIOBOOKUNRESOLVEDMETADATA_H
#define LPITUNESMEDIAAUDIOBOOKUNRESOLVEDMETADATA_H

@class NSString, NSArray;
@protocol LPiTunesMediaUnresolvedMetadata;

#import <Foundation/Foundation.h>

#import "LPiTunesMediaAsset.h"

@interface LPiTunesMediaAudioBookUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>



@property (retain, nonatomic) LPiTunesMediaAsset *artwork; // ivar: _artwork
@property (copy, nonatomic) NSString *author; // ivar: _author
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *narrator; // ivar: _narrator
@property (retain, nonatomic) NSArray *offers; // ivar: _offers
@property (copy, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (readonly) Class superclass;


-(id)assetsToFetch;
-(id)resolve;


@end


#endif