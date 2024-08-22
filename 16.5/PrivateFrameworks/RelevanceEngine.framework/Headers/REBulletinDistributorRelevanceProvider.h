// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REBULLETINDISTRIBUTORRELEVANCEPROVIDER_H
#define REBULLETINDISTRIBUTORRELEVANCEPROVIDER_H

@class NSString;


#import "RERelevanceProvider.h"

@interface REBulletinDistributorRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSString *bulletinSectionIdentifier; // ivar: _bulletinSectionIdentifier


+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)initWithBulletinSectionIdentifier:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif