// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTODOISTSESSIONMANAGER_H
#define WFTODOISTSESSIONMANAGER_H

@class NSURL, NSURLSession, NSString;

#import <Foundation/Foundation.h>

#import "WFOAuth2Credential.h"

@interface WFTodoistSessionManager : NSObject

@property (readonly, copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) WFOAuth2Credential *credential; // ivar: _credential
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session
@property (copy, nonatomic) NSString *syncToken; // ivar: _syncToken


-(id)init;
-(id)initWithSessionConfiguration:(id)arg0 ;
-(void)createFileOnItemWithId:(NSInteger)arg0 withFile:(id)arg1 completionHandler:(id)arg2 ;
-(void)createItemInProject:(id)arg0 content:(id)arg1 dueDateString:(id)arg2 reminderDateString:(id)arg3 reminderService:(NSInteger)arg4 priority:(NSInteger)arg5 note:(id)arg6 completionHandler:(id)arg7 ;
-(void)getProjectsWithCompletionHandler:(id)arg0 ;
-(void)requestWithCommands:(id)arg0 resourceTypes:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif