// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSINSERTIONPOINTHELPER_H
#define NSINSERTIONPOINTHELPER_H


#import <Foundation/Foundation.h>


@interface NSInsertionPointHelper : NSObject {
    _NSRange _charRange;
    NSInteger _writingDirection;
    NSUInteger _count;
    NSUInteger _altCount;
    *CGFloat _logicalPositions;
    *CGFloat _logicalLeftBoundaries;
    *CGFloat _logicalRightBoundaries;
    *NSUInteger _logicalCharIndexes;
    *CGFloat _displayPositions;
    *NSUInteger _displayCharIndexes;
    *CGFloat _logicalAltPositions;
    *NSUInteger _logicalAltCharIndexes;
    *CGFloat _displayAltPositions;
    *NSUInteger _displayAltCharIndexes;
}




-(void)dealloc;


@end


#endif