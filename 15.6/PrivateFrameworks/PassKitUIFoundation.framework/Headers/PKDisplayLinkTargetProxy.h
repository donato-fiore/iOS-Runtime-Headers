// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDISPLAYLINKTARGETPROXY_H
#define PKDISPLAYLINKTARGETPROXY_H


#import <Foundation/Foundation.h>

#import "PKRenderLoop.h"

@interface PKDisplayLinkTargetProxy : NSObject {
    PKRenderLoop *_target;
}




-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(void)drawWithDisplayLink:(id)arg0 ;


@end


#endif