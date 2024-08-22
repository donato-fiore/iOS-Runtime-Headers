// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCC24INTELLIGENCEPLATFORMCORE19ENTITYRESOLUTIONXPC8DELEGATE_H
#define _TTCC24INTELLIGENCEPLATFORMCORE19ENTITYRESOLUTIONXPC8DELEGATE_H

@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC24IntelligencePlatformCore19EntityResolutionXPC8Delegate : NSObject <NSXPCListenerDelegate>





-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;


@end


#endif