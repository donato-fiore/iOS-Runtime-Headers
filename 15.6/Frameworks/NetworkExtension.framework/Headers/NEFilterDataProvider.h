// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILTERDATAPROVIDER_H
#define NEFILTERDATAPROVIDER_H

@class NSString;
@protocol NSExtensionRequestHandling;


#import "NEFilterProvider.h"

@interface NEFilterDataProvider : NEFilterProvider <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)handleInboundDataCompleteForFlow:(id)arg0 ;
-(id)handleInboundDataFromFlow:(id)arg0 readBytesStartOffset:(NSUInteger)arg1 readBytes:(id)arg2 ;
-(id)handleNewFlow:(id)arg0 ;
-(id)handleOutboundDataCompleteForFlow:(id)arg0 ;
-(id)handleOutboundDataFromFlow:(id)arg0 readBytesStartOffset:(NSUInteger)arg1 readBytes:(id)arg2 ;
-(id)handleRemediationForFlow:(id)arg0 ;
-(void)applySettings:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleRulesChanged;
-(void)resumeFlow:(id)arg0 withVerdict:(id)arg1 ;
-(void)updateFlow:(id)arg0 usingVerdict:(id)arg1 forDirection:(NSInteger)arg2 ;


@end


#endif