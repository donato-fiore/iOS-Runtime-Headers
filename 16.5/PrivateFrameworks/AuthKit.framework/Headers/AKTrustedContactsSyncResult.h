// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKTRUSTEDCONTACTSSYNCRESULT_H
#define AKTRUSTEDCONTACTSSYNCRESULT_H

@class NSString, NSDictionary, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AKTrustedContactsSyncResult : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *beneficiaryListVersion; // ivar: _beneficiaryListVersion
@property (copy, nonatomic) NSDictionary *beneficiaryOperationsByID; // ivar: _beneficiaryOperationsByID
@property (copy, nonatomic) NSString *custodianListVersion; // ivar: _custodianListVersion
@property (copy, nonatomic) NSDictionary *custodianOperationsByID; // ivar: _custodianOperationsByID
@property (copy, nonatomic) NSArray *orphanedBeneficiaryUUIDs; // ivar: _orphanedBeneficiaryUUIDs
@property (copy, nonatomic) NSArray *orphanedCustodianUUIDs; // ivar: _orphanedCustodianUUIDs


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif