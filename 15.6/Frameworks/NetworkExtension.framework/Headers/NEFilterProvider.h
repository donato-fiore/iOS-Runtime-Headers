// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILTERPROVIDER_H
#define NEFILTERPROVIDER_H

@class NSString;
@protocol NSExtensionRequestHandling;


#import "NEProvider.h"
#import "NEFilterProviderConfiguration.h"

@interface NEFilterProvider : NEProvider <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NEFilterProviderConfiguration *filterConfiguration; // ivar: _filterConfiguration
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)descriptionForAction:(NSInteger)arg0 ;
-(void)handleReport:(id)arg0 ;
-(void)startFilterWithCompletionHandler:(id)arg0 ;
-(void)stopFilterWithReason:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif