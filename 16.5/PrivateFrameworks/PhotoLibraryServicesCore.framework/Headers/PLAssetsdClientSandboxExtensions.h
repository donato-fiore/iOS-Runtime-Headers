// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETSDCLIENTSANDBOXEXTENSIONS_H
#define PLASSETSDCLIENTSANDBOXEXTENSIONS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLAssetsdClientSandboxExtensions : NSObject {
    NSMutableDictionary *_securityScopedURLs;
}




-(BOOL)consumeSandboxExtensions:(id)arg0 ;
-(id)init;
-(void)_stopUsingSecurityScopedURLs;
-(void)dealloc;


@end


#endif