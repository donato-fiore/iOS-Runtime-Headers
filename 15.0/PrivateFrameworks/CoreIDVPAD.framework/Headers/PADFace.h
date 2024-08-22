// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PADFACE_H
#define PADFACE_H


#import <Foundation/Foundation.h>

#import "PADPose.h"

@interface PADFace : NSObject

@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (retain, nonatomic) PADPose *facePose; // ivar: _facePose




@end


#endif