// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCLURLDATALOADERTASK_H
#define MCLURLDATALOADERTASK_H

@class NSURL, NSString, NSError, NSURLRequest, NSHTTPURLResponse, NSData;

#import <Foundation/Foundation.h>


@interface MCLURLDataLoaderTask : NSObject {
    id *_completion;
    id *_receiveDataHandler;
}


@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL background; // ivar: _background
@property (readonly, nonatomic) BOOL cachedResponse; // ivar: _cachedResponse
@property (readonly, nonatomic) BOOL cancelled; // ivar: _cancelled
@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) BOOL download;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSURLRequest *originalRequest; // ivar: _originalRequest
@property (readonly, nonatomic) float progress; // ivar: _progress
@property (copy, nonatomic) id *redirectHandler; // ivar: _redirectHandler
@property (readonly, nonatomic) NSURLRequest *request; // ivar: _request
@property (readonly, nonatomic) NSHTTPURLResponse *response; // ivar: _response
@property (readonly, nonatomic) BOOL responseClientError;
@property (readonly, nonatomic) NSData *responseData; // ivar: _responseData
@property (readonly, nonatomic) BOOL responseOk;
@property (readonly, nonatomic) BOOL responseTimeout;
@property (readonly, nonatomic) NSString *targetPath; // ivar: _targetPath
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(id)completion:(SEL)arg0 ;
-(id)contentType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
// -(id)initWithURLRequest:(id)arg0 targetPath:(id)arg1 category:(id)arg2 completionHandler:(id)arg3 receiveData:(unk)arg4  ;
-(id)receiveDataHandler:(SEL)arg0 ;
-(void)applyFileExtension:(id)arg0 ;
-(void)applyMimeType;
-(void)dispatchCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif