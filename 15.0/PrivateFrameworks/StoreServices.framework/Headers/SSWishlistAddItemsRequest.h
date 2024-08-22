// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSWISHLISTADDITEMSREQUEST_H
#define SSWISHLISTADDITEMSREQUEST_H

@class NSString, NSArray;


#import "SSRequest.h"

@interface SSWishlistAddItemsRequest : SSRequest

@property (readonly, copy) NSString *caller; // ivar: _caller
@property (readonly, copy) NSArray *items; // ivar: _items
@property (readonly, copy) NSString *version; // ivar: _version


-(id)_convertedValueForValue:(id)arg0 ;
-(id)copyQueryStringParameters;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithItems:(id)arg0 caller:(id)arg1 version:(id)arg2 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithAddItemsResponseBlock:(id)arg0 ;


@end


#endif