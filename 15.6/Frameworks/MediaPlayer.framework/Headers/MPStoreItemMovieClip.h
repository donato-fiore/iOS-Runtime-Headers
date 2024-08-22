// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTOREITEMMOVIECLIP_H
#define MPSTOREITEMMOVIECLIP_H

@class NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "MPStoreArtworkRequestToken.h"

@interface MPStoreItemMovieClip : NSObject

@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSDictionary *lookupDictionary; // ivar: _lookupDictionary
@property (readonly, copy, nonatomic) MPStoreArtworkRequestToken *previewArtworkRequestToken;
@property (readonly, copy, nonatomic) NSString *title;


-(id)initWithLookupDictionary:(id)arg0 ;


@end


#endif