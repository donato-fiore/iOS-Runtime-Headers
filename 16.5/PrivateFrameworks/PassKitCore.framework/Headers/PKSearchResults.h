// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSEARCHRESULTS_H
#define PKSEARCHRESULTS_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKSearchResults : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *barcodePassResults; // ivar: _barcodePassResults
@property (copy, nonatomic) NSArray *categoryResults; // ivar: _categoryResults
@property (copy, nonatomic) NSArray *locationResults; // ivar: _locationResults
@property (copy, nonatomic) NSArray *merchantResults; // ivar: _merchantResults
@property (copy, nonatomic) NSArray *paymentPassResults; // ivar: _paymentPassResults
@property (copy, nonatomic) NSArray *personResults; // ivar: _personResults
@property (copy, nonatomic) NSArray *suggestedAutocompleteTokens; // ivar: _suggestedAutocompleteTokens
@property (copy, nonatomic) NSArray *transactionResults; // ivar: _transactionResults
@property (copy, nonatomic) NSArray *transactionTagResults; // ivar: _transactionTagResults


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif