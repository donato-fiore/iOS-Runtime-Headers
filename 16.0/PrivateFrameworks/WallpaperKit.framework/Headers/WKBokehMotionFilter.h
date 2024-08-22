// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKBOKEHMOTIONFILTER_H
#define WKBOKEHMOTIONFILTER_H


#import <Foundation/Foundation.h>

#import "WKBokehMotionManager.h"

@interface WKBokehMotionFilter : NSObject {
    WKBokehMotionManager *_motionManager;
    CGFloat _filterCoefficient;
    CGPoint _filteredPosition;
    CGSize _displacement;
}




-(id)init;


@end


#endif