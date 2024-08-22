// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIGIFTVALIDATIONRESPONSE_H
#define SKUIGIFTVALIDATIONRESPONSE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SKUIGiftValidationResponse : NSObject

@property (readonly, nonatomic) NSString *errorString; // ivar: _errorString
@property (readonly, nonatomic) NSString *giftKey; // ivar: _giftKey
@property (readonly, nonatomic) NSString *totalGiftAmountString; // ivar: _totalGiftAmountString
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


-(id)initWithValidationDictionary:(id)arg0 ;


@end


#endif