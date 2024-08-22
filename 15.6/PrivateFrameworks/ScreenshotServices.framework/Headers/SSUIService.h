// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSUISERVICE_H
#define SSUISERVICE_H


#import <Foundation/Foundation.h>

#import "SSUIServiceClient.h"

@interface SSUIService : NSObject {
    SSUIServiceClient *_client;
}




-(id)init;
-(void)_runPPTNamed:(id)arg0 numberOfRequiredScreenshots:(NSUInteger)arg1 ;
-(void)showScreenshotUI;
-(void)showScreenshotUIForImage:(id)arg0 options:(id)arg1 ;
-(void)showScreenshotUIForImage:(id)arg0 options:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif