// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIARTWORKREQUEST_H
#define SKUIARTWORKREQUEST_H

@class NSURL, SSVURLDataConsumer, NSString;
@protocol NSCopying, SKUIArtworkRequestDelegate;


#import "SKUIResourceRequest.h"

@interface SKUIArtworkRequest : SKUIResourceRequest <NSCopying>



@property (copy, nonatomic) NSURL *URL; // ivar: _url
@property (retain, nonatomic) SSVURLDataConsumer *dataConsumer; // ivar: _dataConsumer
@property (weak, nonatomic) NSObject<SKUIArtworkRequestDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *imageName; // ivar: _imageName


-(BOOL)cachesInMemory;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)newLoadOperation;
-(void)finishWithResource:(id)arg0 ;


@end


#endif