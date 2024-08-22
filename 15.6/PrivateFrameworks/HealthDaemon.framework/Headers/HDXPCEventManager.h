// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDXPCEVENTMANAGER_H
#define HDXPCEVENTMANAGER_H


#import <Foundation/Foundation.h>

#import "HDXPCEventPublisher.h"

@interface HDXPCEventManager : NSObject {
    HDXPCEventPublisher *_authorizationPublisher;
}




-(id)init;
-(void)authorizationChangedForBundleIdentifier:(id)arg0 ;


@end


#endif