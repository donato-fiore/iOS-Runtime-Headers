// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMICROSOFTTRANSLATESESSIONMANAGER_H
#define WFMICROSOFTTRANSLATESESSIONMANAGER_H

@class NSString, NSURL, NSURLSession;

#import <Foundation/Foundation.h>


@interface WFMicrosoftTranslateSessionManager : NSObject

@property (copy, nonatomic) NSString *apiKey; // ivar: _apiKey
@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session


-(id)init;
-(id)initWithSession:(id)arg0 ;
-(id)initWithSessionConfiguration:(id)arg0 ;
-(void)detectLanguagesOfStrings:(id)arg0 completion:(id)arg1 ;
-(void)getAccessTokenWithCompletion:(id)arg0 ;
-(void)getAvailableLanguages:(id)arg0 ;
-(void)sendRequestWithURL:(id)arg0 queryParameters:(id)arg1 requestBody:(id)arg2 completion:(id)arg3 ;
-(void)translateStrings:(id)arg0 fromLanguage:(id)arg1 intoLanguage:(id)arg2 completion:(id)arg3 ;


@end


#endif