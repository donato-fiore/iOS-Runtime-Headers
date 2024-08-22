// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTOCOMPLETERESULTVALUE_H
#define CNAUTOCOMPLETERESULTVALUE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNAutocompleteResultValue : NSObject

@property (copy) NSString *address; // ivar: _address
@property NSInteger addressType; // ivar: _addressType
@property (copy) NSString *identifier; // ivar: _identifier
@property (copy) NSString *instantMessageAddressService; // ivar: _instantMessageAddressService
@property (copy) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *stringForHashingMemo; // ivar: _stringForHashingMemo


+(id)normalizedAddressForValue:(id)arg0 ;
+(id)resultValueWithAddress:(id)arg0 addressType:(NSInteger)arg1 ;
+(id)stringForHashingValue:(id)arg0 ;
-(BOOL)addressExactlyMatchesSearchTerm:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)stringForHashing;
-(id)stringForSorting;


@end


#endif