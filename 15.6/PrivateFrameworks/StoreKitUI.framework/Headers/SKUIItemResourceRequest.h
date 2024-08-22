// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIITEMRESOURCEREQUEST_H
#define SKUIITEMRESOURCEREQUEST_H

@class NSString, NSArray;
@protocol NSCopying, SKUIItemRequestDelegate;


#import "SKUIResourceRequest.h"

@interface SKUIItemResourceRequest : SKUIResourceRequest <NSCopying>



@property (weak, nonatomic) NSObject<SKUIItemRequestDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *imageProfile; // ivar: _imageProfile
@property (copy, nonatomic) NSArray *itemIdentifiers; // ivar: _itemIdentifiers
@property (copy, nonatomic) NSString *keyProfile; // ivar: _keyProfile


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newLoadOperation;
-(void)finishWithResource:(id)arg0 ;


@end


#endif