// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKCONTINUATIONMETADATA_H
#define WLKCONTINUATIONMETADATA_H

@class NSString, NSArray, NSNumber;


#import "WLKContinuationMetadataBase.h"
#import "WLKPlayable.h"

@interface WLKContinuationMetadata : WLKContinuationMetadataBase

@property (readonly, copy, nonatomic) NSString *deleteID; // ivar: _deleteID
@property (readonly, nonatomic) WLKPlayable *playable; // ivar: _playable
@property (readonly, copy, nonatomic) NSArray *siriActionsCategories; // ivar: _siriActionsCategories
@property (readonly, copy, nonatomic) NSNumber *siriActionsExpirationEpochMillis; // ivar: _siriActionsExpirationEpochMillis


-(id)initWithDictionary:(id)arg0 context:(id)arg1 ;


@end


#endif