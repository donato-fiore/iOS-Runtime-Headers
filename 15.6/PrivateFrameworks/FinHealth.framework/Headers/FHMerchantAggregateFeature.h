// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FHMERCHANTAGGREGATEFEATURE_H
#define FHMERCHANTAGGREGATEFEATURE_H

@class NSString;


#import "FHAggregateFeature.h"

@interface FHMerchantAggregateFeature : FHAggregateFeature

@property (copy, nonatomic) NSString *merchantDisplayName; // ivar: _merchantDisplayName
@property (copy, nonatomic) NSString *merchantID; // ivar: _merchantID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMerchantID:(id)arg0 merchantDisplayName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif