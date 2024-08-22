// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSTATEMENTMETADATA_H
#define PKACCOUNTSTATEMENTMETADATA_H

@class NSString, NSDate, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountStatementMetadata : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) NSUInteger accountType; // ivar: _accountType
@property (copy, nonatomic) NSDate *closingDate; // ivar: _closingDate
@property (nonatomic) BOOL hasBeenProcessed; // ivar: _hasBeenProcessed
@property (copy, nonatomic) NSDate *lastProcessedDate; // ivar: _lastProcessedDate
@property (copy, nonatomic) NSDate *openingDate; // ivar: _openingDate
@property (nonatomic) NSInteger processedAttemptCount; // ivar: _processedAttemptCount
@property (copy, nonatomic) NSString *statementIdentifier; // ivar: _statementIdentifier
@property (copy, nonatomic) NSArray *transactionMetadata; // ivar: _transactionMetadata


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithArray:(id)arg0 accountIdentifier:(id)arg1 statementIdentifier:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)transactionsMissingFromDevice;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif