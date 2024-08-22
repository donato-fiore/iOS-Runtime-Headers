// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SALOCALSEARCHADDITEMTOMAPCACHE_H
#define SALOCALSEARCHADDITEMTOMAPCACHE_H



#import "SADomainCommand.h"
#import "SALocalSearchMapItem.h"

@interface SALocalSearchAddItemToMapCache : SADomainCommand

@property (retain, nonatomic) SALocalSearchMapItem *mapItem;


+(id)addItemToMapCache;
+(id)addItemToMapCacheWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif