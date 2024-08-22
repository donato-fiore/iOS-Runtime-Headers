// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MESSAGECONTENTREPRESENTATIONREQUESTDELEGATE_H
#define MESSAGECONTENTREPRESENTATIONREQUESTDELEGATE_H

@class NSString;
@protocol EMContentItemRequestDelegate;

#import <Foundation/Foundation.h>


@interface MessageContentRepresentationRequestDelegate : NSObject <EMContentItemRequestDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)contentObjectID:(id)arg0 generateHTMLSnippetsForMailDropContentItems:(id)arg1 completionHandler:(id)arg2 ;
-(void)contentObjectID:(id)arg0 generateHTMLSnippetsForRelatedContentItems:(id)arg1 completionHandler:(id)arg2 ;
-(void)contentObjectID:(id)arg0 placeholderHTMLForEmptyContentWithCompletionHandler:(id)arg1 ;


@end


#endif