// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RELOCATIONRELEVANCEPROVIDER_H
#define RELOCATIONRELEVANCEPROVIDER_H

@class NSString, CLLocation;


#import "RERelevanceProvider.h"

@interface RELocationRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) CGFloat accuracy; // ivar: _accuracy
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithLocation:(id)arg0 radius:(CGFloat)arg1 ;
-(id)initWithLocation:(id)arg0 radius:(CGFloat)arg1 accuracy:(CGFloat)arg2 ;
-(id)initWithLocationType:(NSUInteger)arg0 ;
-(id)providerWithBundleIdentifier:(id)arg0 ;


@end


#endif