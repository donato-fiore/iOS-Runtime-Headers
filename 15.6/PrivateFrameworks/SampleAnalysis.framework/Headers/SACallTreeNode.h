// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACALLTREENODE_H
#define SACALLTREENODE_H


#import <Foundation/Foundation.h>


@interface SACallTreeNode : NSObject

@property NSUInteger sampleCount; // ivar: _sampleCount
@property NSUInteger startSampleIndex; // ivar: _startSampleIndex


-(id)initWithStartSampleIndex:(NSUInteger)arg0 sampleCount:(NSUInteger)arg1 ;


@end


#endif