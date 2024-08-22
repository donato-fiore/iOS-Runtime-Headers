// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KGGRAPHPATH_H
#define KGGRAPHPATH_H


#import <Foundation/Foundation.h>


@interface KGGraphPath : NSObject

@property (readonly, nonatomic) NSUInteger numberOfPaths; // ivar: _numberOfPaths
@property (readonly, nonatomic) NSUInteger sourceNodeIdentifier; // ivar: _sourceNodeIdentifier
@property (readonly, nonatomic) NSUInteger targetNodeIdentifier; // ivar: _targetNodeIdentifier


-(id)description;
-(id)initWithSourceNodeIdentifier:(NSUInteger)arg0 targetNodeIdentifier:(NSUInteger)arg1 numberOfPaths:(NSUInteger)arg2 ;


@end


#endif