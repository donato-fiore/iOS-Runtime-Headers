// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAUIDISPLAYLINKTARGETPROXY_H
#define LAUIDISPLAYLINKTARGETPROXY_H


#import <Foundation/Foundation.h>

#import "LAUIRenderLoop.h"

@interface LAUIDisplayLinkTargetProxy : NSObject {
    LAUIRenderLoop *_target;
}




-(id)init;
-(void)drawWithDisplayLink:(id)arg0 ;


@end


#endif