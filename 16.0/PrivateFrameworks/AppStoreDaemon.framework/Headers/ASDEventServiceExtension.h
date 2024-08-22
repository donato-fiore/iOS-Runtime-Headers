// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDEVENTSERVICEEXTENSION_H
#define ASDEVENTSERVICEEXTENSION_H

@class NSString;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface ASDEventServiceExtension : NSObject <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)didReceiveInstallationEvent:(id)arg0 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;


@end


#endif