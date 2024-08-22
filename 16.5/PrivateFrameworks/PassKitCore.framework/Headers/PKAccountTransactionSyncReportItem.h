// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTTRANSACTIONSYNCREPORTITEM_H
#define PKACCOUNTTRANSACTIONSYNCREPORTITEM_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountTransactionSyncReportItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, copy, nonatomic) NSString *recordName; // ivar: _recordName
@property (readonly, copy, nonatomic) NSString *recordType; // ivar: _recordType
@property (readonly, copy, nonatomic) NSString *transactionServiceIdentifier; // ivar: _transactionServiceIdentifier
@property (readonly, copy, nonatomic) NSString *zoneName; // ivar: _zoneName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransactionServiceIdentifier:(id)arg0 recordName:(id)arg1 recordType:(id)arg2 zoneName:(id)arg3 altDSID:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif