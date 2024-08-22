// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCLOUDSTOREZONEQUERYCONFIGURATION_H
#define PKCLOUDSTOREZONEQUERYCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKCloudStoreZoneQueryConfiguration : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) NSInteger accountType; // ivar: _accountType
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, nonatomic) NSUInteger itemType; // ivar: _itemType
@property (readonly, copy, nonatomic) NSString *recordName; // ivar: _recordName
@property (copy, nonatomic) NSString *transactionSourceIdentifier; // ivar: _transactionSourceIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemType:(NSUInteger)arg0 recordName:(id)arg1 ;
-(id)initWithTransactionSourceIdentifier:(id)arg0 accountIdentifier:(id)arg1 accountType:(NSInteger)arg2 serviceIdentifier:(id)arg3 altDSID:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif