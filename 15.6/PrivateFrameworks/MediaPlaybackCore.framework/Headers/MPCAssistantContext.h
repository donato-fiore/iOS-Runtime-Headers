// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCASSISTANTCONTEXT_H
#define MPCASSISTANTCONTEXT_H


#import <Foundation/Foundation.h>

#import "MPCAssistantDiscovery.h"

@interface MPCAssistantContext : NSObject {
    MPCAssistantDiscovery *_discovery;
}




-(id)init;
-(void)modifySystemMusicContextForDestination:(id)arg0 completion:(id)arg1 ;


@end


#endif