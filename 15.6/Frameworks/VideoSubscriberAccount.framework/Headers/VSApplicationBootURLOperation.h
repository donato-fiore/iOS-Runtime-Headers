// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSAPPLICATIONBOOTURLOPERATION_H
#define VSAPPLICATIONBOOTURLOPERATION_H

@class NSString, NSDictionary, NSURL;
@protocol NSURLSessionDelegate;


#import "VSAsyncOperation.h"
#import "VSPreferences.h"
#import "VSFailable.h"

@interface VSApplicationBootURLOperation : VSAsyncOperation <NSURLSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDeveloper) BOOL developer; // ivar: _developer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSPreferences *preferences; // ivar: _preferences
@property (readonly) Class superclass;
@property (nonatomic, getter=isForTesting) BOOL test; // ivar: _test
@property (retain, nonatomic) NSDictionary *trustInfo; // ivar: _trustInfo
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) VSFailable *urlOrError; // ivar: _urlOrError


-(BOOL)verifyExtendedValidationWithTrust:(struct __SecTrust *)arg0 ;
-(id)generateFilePathForURL:(id)arg0 ;
-(id)init;
-(id)initWithBootURL:(id)arg0 isDeveloper:(BOOL)arg1 ;
-(void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)executionDidBegin;


@end


#endif