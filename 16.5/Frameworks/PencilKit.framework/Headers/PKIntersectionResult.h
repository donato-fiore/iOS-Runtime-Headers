// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINTERSECTIONRESULT_H
#define PKINTERSECTIONRESULT_H

@class NSOrderedSet;

#import <Foundation/Foundation.h>


@interface PKIntersectionResult : NSObject

@property (nonatomic) NSInteger contentType; // ivar: _contentType
@property (retain, nonatomic) NSOrderedSet *intersectedStrokes; // ivar: _intersectedStrokes
@property (nonatomic) NSInteger intersectionAlgorithmType; // ivar: _intersectionAlgorithmType


+(id)noResult;


@end


#endif