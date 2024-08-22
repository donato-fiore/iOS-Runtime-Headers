// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKGESTUREDETECTIONRESULT_H
#define ABPKGESTUREDETECTIONRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ABPK2dSkeleton.h"

@interface ABPKGestureDetectionResult : NSObject

@property (readonly, nonatomic) NSArray *gestureTypes; // ivar: _gestureTypes
@property (readonly, nonatomic) BOOL isPoseValid; // ivar: _isPoseValid
@property (readonly, nonatomic) ABPK2dSkeleton *skeleton2D; // ivar: _skeleton2D
@property (readonly, nonatomic) unsigned int trackingId; // ivar: _trackingId


-(id)init;
-(int)overlayResultOnImage:(struct __CVBuffer *)arg0 withResult:(struct __CVBuffer *)arg1 withColor;
-(void)set2dSkeleton:(id)arg0 isPoseValid:(BOOL)arg1 trackingId:(unsigned int)arg2 gestureTypes:(id)arg3 ;


@end


#endif