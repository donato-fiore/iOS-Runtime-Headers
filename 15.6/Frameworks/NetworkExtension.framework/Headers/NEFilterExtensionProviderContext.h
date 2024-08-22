// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILTEREXTENSIONPROVIDERCONTEXT_H
#define NEFILTEREXTENSIONPROVIDERCONTEXT_H

@class NSString;
@protocol NEFilterExtensionProviderProtocol, NEFilterExtensionProviderHostProtocol, OS_dispatch_queue;


#import "NEExtensionProviderContext.h"

@interface NEFilterExtensionProviderContext : NEExtensionProviderContext <NEFilterExtensionProviderProtocol, NEFilterExtensionProviderHostProtocol>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_description;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;


-(void)setConfiguration:(id)arg0 extensionIdentifier:(id)arg1 ;
-(void)startFilterWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithReason:(int)arg0 ;


@end


#endif