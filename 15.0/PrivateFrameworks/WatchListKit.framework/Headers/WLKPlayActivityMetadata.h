// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKPLAYACTIVITYMETADATA_H
#define WLKPLAYACTIVITYMETADATA_H

@class NSString, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface WLKPlayActivityMetadata : NSObject

@property (readonly, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (readonly, nonatomic) NSString *canonicalShowID; // ivar: _canonicalShowID
@property (readonly, nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, nonatomic) NSString *externalShowID; // ivar: _externalShowID
@property (readonly, nonatomic) NSString *internalLegID; // ivar: _internalLegID
@property (readonly, copy, nonatomic) NSNumber *isCurrentEpisode; // ivar: _isCurrentEpisode
@property (readonly, copy, nonatomic) NSNumber *isShowClosed; // ivar: _isShowClosed
@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSString *overrideChannelID; // ivar: _overrideChannelID
@property (readonly, copy, nonatomic) NSArray *siriActionsCategories; // ivar: _siriActionsCategories


-(id)initWithKey:(id)arg0 dictionary:(id)arg1 ;


@end


#endif