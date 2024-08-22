// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSEARCHTRANSACTIONSTATUSRESULT_H
#define PKSEARCHTRANSACTIONSTATUSRESULT_H

@class NSString;
@protocol PKSearchAutocompleteToken;

#import <Foundation/Foundation.h>


@interface PKSearchTransactionStatusResult : NSObject <PKSearchAutocompleteToken>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger transactionStatus; // ivar: _transactionStatus


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)tokenType;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif