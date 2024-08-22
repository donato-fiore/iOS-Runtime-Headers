// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSEARCHTRANSACTIONGROUPRESULT_H
#define PKSEARCHTRANSACTIONGROUPRESULT_H

@class NSString;
@protocol PKSearchAutocompleteToken;

#import <Foundation/Foundation.h>

#import "PKPaymentTransactionGroup.h"

@interface PKSearchTransactionGroupResult : NSObject <PKSearchAutocompleteToken>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKPaymentTransactionGroup *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)tokenType;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif