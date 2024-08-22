// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORDPRESSSESSIONMANAGER_H
#define WFWORDPRESSSESSIONMANAGER_H

@class NSNumber, NSURL, NSString, NSURLSession;

#import <Foundation/Foundation.h>


@interface WFWordPressSessionManager : NSObject

@property (copy, nonatomic) NSNumber *blogId; // ivar: _blogId
@property (copy, nonatomic) NSURL *endpointURL; // ivar: _endpointURL
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session
@property (copy, nonatomic) NSString *username; // ivar: _username


-(id)init;
-(id)initWithSessionConfiguration:(id)arg0 ;
-(void)createPostWithContent:(id)arg0 completionHandler:(id)arg1 ;
-(void)createPostWithTitle:(id)arg0 content:(id)arg1 type:(id)arg2 date:(id)arg3 format:(id)arg4 status:(id)arg5 allowingComments:(BOOL)arg6 name:(id)arg7 excerpt:(id)arg8 template:(id)arg9 tags:(id)arg10 categories:(id)arg11 thumbnailId:(id)arg12 customFields:(id)arg13 completionHandler:(id)arg14 ;
-(void)getBlogsWithCompletionHandler:(id)arg0 ;
-(void)getPageTemplatesWithCompletionHandler:(id)arg0 ;
-(void)getPost:(id)arg0 completionHandler:(id)arg1 ;
-(void)getPostFormatsWithCompletionHandler:(id)arg0 ;
-(void)getPostStatusesWithCompletionHandler:(id)arg0 ;
-(void)getPostTypesWithCompletionHandler:(id)arg0 ;
-(void)getTermsForTaxonomy:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendRequestWithMethod:(id)arg0 parameters:(id)arg1 completionHandler:(id)arg2 ;
-(void)uploadFile:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif