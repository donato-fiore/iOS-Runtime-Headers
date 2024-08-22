// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2EAP_H
#define NEIKEV2EAP_H


#import <Foundation/Foundation.h>

#import "NEIKEv2EAPProtocol.h"

@interface NEIKEv2EAP : NSObject {
    EAPClientPluginData_s _pluginData;
    NEIKEv2EAPProtocol *_protocol;
    *EAPClientModule_s _module;
}




-(id)init;
-(void)dealloc;


@end


#endif