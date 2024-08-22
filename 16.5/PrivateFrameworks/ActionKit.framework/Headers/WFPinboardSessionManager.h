// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPINBOARDSESSIONMANAGER_H
#define WFPINBOARDSESSIONMANAGER_H

@class NSString, NSURL, NSDateFormatter, NSURLSession;

#import <Foundation/Foundation.h>


@interface WFPinboardSessionManager : NSObject

@property (copy, nonatomic) NSString *apiToken; // ivar: _apiToken
@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, nonatomic) NSDateFormatter *dateTimeFormatter; // ivar: _dateTimeFormatter
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session
@property (copy, nonatomic) NSString *username; // ivar: _username


-(id)authenticatedTaskWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithSession:(id)arg0 ;
-(id)initWithSessionConfiguration:(id)arg0 ;
-(void)addBookmark:(id)arg0 withTitle:(id)arg1 parameters:(id)arg2 completion:(id)arg3 ;
-(void)getBookmarksWithTags:(id)arg0 limit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)getModifiedDateWithCompletion:(id)arg0 ;


@end


#endif