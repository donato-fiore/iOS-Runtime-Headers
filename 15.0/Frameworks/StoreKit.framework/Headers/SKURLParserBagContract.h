// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKURLPARSERBAGCONTRACT_H
#define SKURLPARSERBAGCONTRACT_H

@class SSURLBag, AMSBagValue, NSString;
@protocol AMSURLParserBagContract;

#import <Foundation/Foundation.h>


@interface SKURLParserBagContract : NSObject <AMSURLParserBagContract>



@property (retain, nonatomic) SSURLBag *bag; // ivar: _bag
@property (readonly, nonatomic) AMSBagValue *commerceUIURLPatterns;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedContract;
-(id)init;


@end


#endif