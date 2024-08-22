// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTFORMATTERSMARTFETCHER_H
#define CNCONTACTFORMATTERSMARTFETCHER_H

@class NSSet, NSDictionary;


#import "CNSmartPropertyFetcher.h"

@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher {
    NSSet *_mandatoryNameProperties;
    NSDictionary *_fallBackNamePropertyByNameKey;
}


@property (nonatomic) BOOL ignoresNickname; // ivar: _ignoresNickname
@property (nonatomic) BOOL ignoresOrganization; // ivar: _ignoresOrganization


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_cn_ignorableKeys;
-(id)_cn_optionalKeys;
-(id)_cn_requiredKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_cn_executeGetterForRepresentedKeys:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif