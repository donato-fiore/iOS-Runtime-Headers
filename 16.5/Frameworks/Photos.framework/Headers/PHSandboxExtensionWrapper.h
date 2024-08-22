// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHSANDBOXEXTENSIONWRAPPER_H
#define PHSANDBOXEXTENSIONWRAPPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PHSandboxExtensionWrapper : NSObject {
    NSString *_token;
    NSInteger _handle;
}




+(id)wrapperWithToken:(id)arg0 ;
-(void)dealloc;


@end


#endif