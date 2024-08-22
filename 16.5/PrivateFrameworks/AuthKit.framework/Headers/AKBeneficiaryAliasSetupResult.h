// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKBENEFICIARYALIASSETUPRESULT_H
#define AKBENEFICIARYALIASSETUPRESULT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AKBeneficiaryAliasSetupResult : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *beneficiaryAccountName; // ivar: _beneficiaryAccountName
@property (copy, nonatomic) NSString *beneficiaryAltDSID; // ivar: _beneficiaryAltDSID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif