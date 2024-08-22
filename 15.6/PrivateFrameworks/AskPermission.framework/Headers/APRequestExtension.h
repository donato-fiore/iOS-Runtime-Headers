// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APREQUESTEXTENSION_H
#define APREQUESTEXTENSION_H

@class NSString, NSExtensionContext;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface APRequestExtension : NSObject <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtensionContext *extensionContext; // ivar: _extensionContext
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_finish;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)checkDownloadQueue;
-(void)requestUpdatedWithResult:(id)arg0 completion:(id)arg1 ;


@end


#endif