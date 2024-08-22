// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIAAPICOLLECTIONITEMMETADATARESPONSE_H
#define MPMEDIAAPICOLLECTIONITEMMETADATARESPONSE_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface MPMediaAPICollectionItemMetadataResponse : NSObject

@property (readonly, copy, nonatomic) NSArray *failedItemIdentifiers; // ivar: _failedItemIdentifiers
@property (readonly, nonatomic) BOOL isFinalResponse; // ivar: _isFinalResponse
@property (readonly, nonatomic) CGFloat playbackAuthorizationTokenHalfLifeExpiration; // ivar: _playbackAuthorizationTokenHalfLifeExpiration
@property (readonly, copy, nonatomic) NSDictionary *response; // ivar: _response


-(id)initWithMediaAPICollectionItemMetadataResponse:(id)arg0 authorizationTokenHalfLifeDuration:(CGFloat)arg1 failedItemIdentifiers:(id)arg2 isFinalResponse:(BOOL)arg3 ;


@end


#endif