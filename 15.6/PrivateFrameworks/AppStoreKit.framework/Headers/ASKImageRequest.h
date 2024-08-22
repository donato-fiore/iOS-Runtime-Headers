// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASKIMAGEREQUEST_H
#define ASKIMAGEREQUEST_H

@class NSURLRequest;
@protocol ASKResourceDataConsumer, ASKImageRequestDelegate;


#import "ASKResourceRequest.h"
#import "ASKLoadResourceOperation.h"

@interface ASKImageRequest : ASKResourceRequest

@property (readonly, nonatomic) NSObject<ASKResourceDataConsumer> *dataConsumer; // ivar: _dataConsumer
@property (readonly, weak, nonatomic) NSObject<ASKImageRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isResourceRequest; // ivar: _isResourceRequest
@property (readonly, nonatomic) ASKLoadResourceOperation *loadOperation; // ivar: _loadOperation
@property (readonly, copy, nonatomic) NSURLRequest *urlRequest; // ivar: _urlRequest


-(NSUInteger)cacheOptions;
-(id)description;
-(id)init;
-(id)initWithURLRequest:(id)arg0 loadOperation:(id)arg1 dataConsumer:(id)arg2 delegate:(id)arg3 ;
-(id)makeLoadOperation;
-(void)didLoadResource:(id)arg0 error:(id)arg1 ;


@end


#endif