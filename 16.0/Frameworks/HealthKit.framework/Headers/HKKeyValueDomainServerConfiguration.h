// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKKEYVALUEDOMAINSERVERCONFIGURATION_H
#define HKKEYVALUEDOMAINSERVERCONFIGURATION_H

@class NSString;


#import "HKTaskConfiguration.h"

@interface HKKeyValueDomainServerConfiguration : HKTaskConfiguration

@property (readonly, nonatomic) NSInteger category; // ivar: _category
@property (readonly, copy, nonatomic) NSString *domainName; // ivar: _domainName


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCategory:(NSInteger)arg0 domainName:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif