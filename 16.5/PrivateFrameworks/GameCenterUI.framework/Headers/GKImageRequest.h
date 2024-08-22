// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKIMAGEREQUEST_H
#define GKIMAGEREQUEST_H

@class NSURLRequest;
@protocol GKResourceDataConsumer, GKImageRequestDelegate;


#import "GKResourceRequest.h"

@interface GKImageRequest : GKResourceRequest

@property (readonly, nonatomic) NSObject<GKResourceDataConsumer> *dataConsumer; // ivar: _dataConsumer
@property (readonly, weak, nonatomic) NSObject<GKImageRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isResourceRequest;
@property (readonly, copy, nonatomic) NSURLRequest *urlRequest; // ivar: _urlRequest


+(id)searchBundles;
+(void)setSearchBundles:(id)arg0 ;
-(BOOL)isAvatarImageRequest;
-(BOOL)isContactImageRequest;
-(BOOL)isSystemImageRequest;
-(NSUInteger)cacheOptions;
-(id)description;
-(id)init;
-(id)initWithURLRequest:(id)arg0 dataConsumer:(id)arg1 delegate:(id)arg2 ;
-(id)makeLoadOperation;
-(void)didLoadResource:(id)arg0 error:(id)arg1 ;


@end


#endif