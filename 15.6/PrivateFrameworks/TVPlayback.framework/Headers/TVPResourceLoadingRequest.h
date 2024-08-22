// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPRESOURCELOADINGREQUEST_H
#define TVPRESOURCELOADINGREQUEST_H

@class NSURL, NSNumber, NSDictionary, AVAssetResourceLoadingRequest;

#import <Foundation/Foundation.h>


@interface TVPResourceLoadingRequest : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSNumber *avRequestID;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // ivar: _loadingRequest


-(id)init;
-(id)initWithAssetResourceLoadingRequest:(id)arg0 ;
-(void)finishLoadingWithError:(id)arg0 ;
-(void)finishLoadingWithResponse:(id)arg0 data:(id)arg1 renewalDate:(id)arg2 redirect:(id)arg3 ;
-(void)finishLoadingWithResponseData:(id)arg0 renewalDate:(id)arg1 keyType:(NSInteger)arg2 ;


@end


#endif