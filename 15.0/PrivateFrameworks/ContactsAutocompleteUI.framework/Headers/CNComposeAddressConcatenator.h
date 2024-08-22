// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCOMPOSEADDRESSCONCATENATOR_H
#define CNCOMPOSEADDRESSCONCATENATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNComposeAddressConcatenator : NSObject

@property (retain, nonatomic) NSString *andNMoreFormat; // ivar: _andNMoreFormat
@property (retain, nonatomic) NSString *andNMoreNoEllipsisFormat; // ivar: _andNMoreNoEllipsisFormat
@property (retain, nonatomic) NSString *nAddressesFormat; // ivar: _nAddressesFormat
@property (retain, nonatomic) NSString *truncatedAddressFormat; // ivar: _truncatedAddressFormat


+(id)defaultRecipientListConcatenator;
// -(id)commaSeparatedAddressListWithAddressCount:(NSUInteger)arg0 prefixForAddressAtIndex:(id)arg1 stringForAddressAtIndex:(unk)arg2 lengthValidationBlock:(id)arg3  ;
// -(void)getCommaSeparatedAddressList:(*id)arg0 andListSuffix:(*id)arg1 withAddressCount:(NSUInteger)arg2 prefixForAddressAtIndex:(id)arg3 stringForAddressAtIndex:(unk)arg4 lengthValidationBlock:(id)arg5  ;


@end


#endif