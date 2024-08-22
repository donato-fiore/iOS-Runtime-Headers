// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INEXTENSION_H
#define INEXTENSION_H

@class NSString;
@protocol NSExtensionRequestHandling, INIntentHandlerProviding;

#import <Foundation/Foundation.h>

#import "INExtensionContext.h"

@interface INExtension : NSObject <NSExtensionRequestHandling, INIntentHandlerProviding>



@property (readonly, nonatomic) INExtensionContext *_extensionContext; // ivar: _extensionContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)handlerForIntent:(id)arg0 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;


@end


#endif