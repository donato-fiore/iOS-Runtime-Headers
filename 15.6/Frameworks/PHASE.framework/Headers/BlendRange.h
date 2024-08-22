// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLENDRANGE_H
#define BLENDRANGE_H


#import <Foundation/Foundation.h>

#import "PHASESoundEventNodeDefinition.h"
#import "PHASEEnvelope.h"

@interface BlendRange : NSObject {
    PHASESoundEventNodeDefinition *subtree;
    PHASEEnvelope *blendEnvelope;
}






@end


#endif