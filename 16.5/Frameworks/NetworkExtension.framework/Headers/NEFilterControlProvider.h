// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEFILTERCONTROLPROVIDER_H
#define NEFILTERCONTROLPROVIDER_H

@class NSDictionary, NSString;
@protocol NSExtensionRequestHandling;


#import "NEFilterProvider.h"

@interface NEFilterControlProvider : NEFilterProvider <NSExtensionRequestHandling>



@property (copy) NSDictionary *URLAppendStringMap; // ivar: _URLAppendStringMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSDictionary *remediationMap; // ivar: _remediationMap
@property (readonly) Class superclass;


-(void)handleNewFlow:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleRemediationForFlow:(id)arg0 completionHandler:(id)arg1 ;
-(void)notifyRulesChanged;


@end


#endif