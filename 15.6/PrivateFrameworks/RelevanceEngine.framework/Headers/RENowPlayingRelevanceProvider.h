// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RENOWPLAYINGRELEVANCEPROVIDER_H
#define RENOWPLAYINGRELEVANCEPROVIDER_H

@class NSString;


#import "RERelevanceProvider.h"

@interface RENowPlayingRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *itemIdentifer; // ivar: _itemIdentifer
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithState:(NSUInteger)arg0 ;
-(id)initWithState:(NSUInteger)arg0 bundleIdentifier:(id)arg1 itemIdentifier:(id)arg2 ;


@end


#endif