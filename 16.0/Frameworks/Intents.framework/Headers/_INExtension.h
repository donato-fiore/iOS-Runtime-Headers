// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INEXTENSION_H
#define _INEXTENSION_H

@class NSString;
@protocol NSExtensionRequestHandling, INIntentHandlerProvidingPrivate;

#import <Foundation/Foundation.h>

#import "INExtensionContext.h"

@interface _INExtension : NSObject <NSExtensionRequestHandling, INIntentHandlerProvidingPrivate>



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