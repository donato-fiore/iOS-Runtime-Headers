// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSDOWNLOADMANIFESTREQUEST_H
#define SSDOWNLOADMANIFESTREQUEST_H

@class NSURLRequest, NSString;
@protocol SSXPCCoding, SSDownloadManifestRequestDelegate;


#import "SSRequest.h"

@interface SSDownloadManifestRequest : SSRequest <SSXPCCoding>

 {
    NSInteger _manifestFormat;
    BOOL _shouldHideUserPrompts;
    NSURLRequest *_urlRequest;
}


@property (readonly) NSURLRequest *URLRequest;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SSDownloadManifestRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger manifestFormat;
@property BOOL shouldHideUserPrompts;
@property (readonly) Class superclass;


-(BOOL)start;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithURLRequest:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithManifestResponseBlock:(id)arg0 ;


@end


#endif