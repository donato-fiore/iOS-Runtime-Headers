// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSKELETONCOLLECTION_H
#define CMSKELETONCOLLECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CMSkeletonCollection : NSObject

@property (nonatomic) CGFloat globalMachtime; // ivar: _globalMachtime
@property (nonatomic) CGFloat localMachtime; // ivar: _localMachtime
@property (retain, nonatomic) NSArray *skeleton2D; // ivar: _skeleton2D
@property (retain, nonatomic) NSArray *skeleton3DLifted; // ivar: _skeleton3DLifted
@property (retain, nonatomic) NSArray *skeleton3DRetargeted; // ivar: _skeleton3DRetargeted




@end


#endif