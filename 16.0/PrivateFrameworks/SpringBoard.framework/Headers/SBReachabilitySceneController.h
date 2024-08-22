// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBREACHABILITYSCENECONTROLLER_H
#define SBREACHABILITYSCENECONTROLLER_H


#import <Foundation/Foundation.h>

#import "SBReachabilityManager.h"

@interface SBReachabilitySceneController : NSObject {
    SBReachabilityManager *_reachabilityManager;
}


@property (readonly, nonatomic) CGFloat effectiveReachabilityYOffset;


-(id)initWithWindowScene:(id)arg0 ;


@end


#endif