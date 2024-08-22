// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUEXTENSIONURLHANDLER_H
#define NUEXTENSIONURLHANDLER_H

@class NSString, NSExtensionContext;
@protocol NUURLHandling, SXURLHandling;

#import <Foundation/Foundation.h>


@interface NUExtensionURLHandler : NSObject <NUURLHandling, SXURLHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSExtensionContext *extensionContext; // ivar: _extensionContext
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithExtensionContext:(id)arg0 ;
-(void)openURL:(id)arg0 ;
-(void)openURL:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif