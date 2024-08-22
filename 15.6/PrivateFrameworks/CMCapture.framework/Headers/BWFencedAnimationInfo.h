// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWFENCEDANIMATIONINFO_H
#define BWFENCEDANIMATIONINFO_H


#import <Foundation/Foundation.h>

#import "FigCaptureMachPortSendRight.h"

@interface BWFencedAnimationInfo : NSObject

@property (readonly) NSInteger fencePortGenerationCount; // ivar: _fencePortGenerationCount
@property (readonly) FigCaptureMachPortSendRight *fencePortSendRight; // ivar: _fencePortSendRight


-(id)description;
-(id)initWithFencePortSendRight:(id)arg0 ;
-(void)dealloc;


@end


#endif