// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REGEOFENCERELEVANCEPROVIDER_H
#define REGEOFENCERELEVANCEPROVIDER_H

@class NSString, CLCircularRegion;


#import "RERelevanceProvider.h"

@interface REGeofenceRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) CLCircularRegion *region; // ivar: _region


+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithRegion:(id)arg0 ;
-(id)initWithRegion:(id)arg0 bundleIdentifier:(id)arg1 ;


@end


#endif