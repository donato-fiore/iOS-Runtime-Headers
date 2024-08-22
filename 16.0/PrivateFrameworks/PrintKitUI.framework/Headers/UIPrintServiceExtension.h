// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTSERVICEEXTENSION_H
#define UIPRINTSERVICEEXTENSION_H

@class NSString, NSExtensionContext;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface UIPrintServiceExtension : NSObject <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtensionContext *extensionContext; // ivar: _extensionContext
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)printerDestinationsForPrintInfo:(id)arg0 ;
-(void)_respondWithResults:(id)arg0 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;


@end


#endif