// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTTRANSACTIONSYNCREPORT_H
#define PKACCOUNTTRANSACTIONSYNCREPORT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;


#import "PKAccountReport.h"

@interface PKAccountTransactionSyncReport : PKAccountReport <NSCopying, NSSecureCoding>

 {
    NSArray *_items;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_itemArrayRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif