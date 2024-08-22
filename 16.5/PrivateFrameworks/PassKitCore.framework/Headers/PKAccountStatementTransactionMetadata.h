// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSTATEMENTTRANSACTIONMETADATA_H
#define PKACCOUNTSTATEMENTTRANSACTIONMETADATA_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountStatementTransactionMetadata : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *originatorAltDSID; // ivar: _originatorAltDSID
@property (nonatomic) NSUInteger status; // ivar: _status
@property (copy, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier
@property (copy, nonatomic) NSString *zoneName; // ivar: _zoneName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif