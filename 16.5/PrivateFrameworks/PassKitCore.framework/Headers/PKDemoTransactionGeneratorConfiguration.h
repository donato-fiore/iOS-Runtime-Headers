// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDEMOTRANSACTIONGENERATORCONFIGURATION_H
#define PKDEMOTRANSACTIONGENERATORCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKDemoTransactionGeneratorConfiguration : NSObject

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) NSInteger accountType; // ivar: _accountType
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (nonatomic) NSInteger demoMerchant; // ivar: _demoMerchant
@property (nonatomic) NSInteger demoPerson; // ivar: _demoPerson
@property (nonatomic) NSUInteger redemptionType; // ivar: _redemptionType
@property (nonatomic) NSInteger transactionCount; // ivar: _transactionCount
@property (copy, nonatomic) NSString *transactionSourceIdentifier; // ivar: _transactionSourceIdentifier


-(id)init;


@end


#endif