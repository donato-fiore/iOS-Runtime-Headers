// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDEFAULTCONTENTPERMISSIONREQUESTOR_H
#define WFDEFAULTCONTENTPERMISSIONREQUESTOR_H

@protocol WFContentPermissionRequestor;

#import <Foundation/Foundation.h>

#import "WFContactStore.h"

@interface WFDefaultContentPermissionRequestor : NSObject <WFContentPermissionRequestor>



@property (retain, nonatomic) WFContactStore *contactStore; // ivar: _contactStore


-(void)allowContactsAccessWithCompletionHandler:(id)arg0 ;
-(void)allowNetworkAccessAfterPromptingForURLs:(id)arg0 completionHandler:(id)arg1 ;
-(void)allowNetworkAccessWithoutPromptingWithCompletionHandler:(id)arg0 ;
-(void)requestUserConsentToLoadWebContentAtURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif