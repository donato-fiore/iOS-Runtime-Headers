// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISORTDATAREQUEST_H
#define SKUISORTDATAREQUEST_H

@class NSURL;
@protocol NSCopying, SKUISortDataRequestDelegate;


#import "SKUIResourceRequest.h"

@interface SKUISortDataRequest : SKUIResourceRequest <NSCopying>



@property (weak, nonatomic) NSObject<SKUISortDataRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSURL *sortURL; // ivar: _sortURL


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSortURL:(id)arg0 ;
-(id)newLoadOperation;
-(void)finishWithResource:(id)arg0 ;


@end


#endif