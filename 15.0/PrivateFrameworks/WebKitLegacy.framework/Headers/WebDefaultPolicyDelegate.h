// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBDEFAULTPOLICYDELEGATE_H
#define WEBDEFAULTPOLICYDELEGATE_H

@class NSString;
@protocol WebPolicyDelegate;

#import <Foundation/Foundation.h>


@interface WebDefaultPolicyDelegate : NSObject <WebPolicyDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedPolicyDelegate;
-(BOOL)webView:(id)arg0 shouldGoToHistoryItem:(id)arg1 ;
-(void)webView:(id)arg0 decidePolicyForMIMEType:(id)arg1 request:(id)arg2 frame:(id)arg3 decisionListener:(id)arg4 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 request:(id)arg2 frame:(id)arg3 decisionListener:(id)arg4 ;
-(void)webView:(id)arg0 decidePolicyForNewWindowAction:(id)arg1 request:(id)arg2 newFrameName:(id)arg3 decisionListener:(id)arg4 ;
-(void)webView:(id)arg0 unableToImplementPolicyWithError:(id)arg1 frame:(id)arg2 ;


@end


#endif