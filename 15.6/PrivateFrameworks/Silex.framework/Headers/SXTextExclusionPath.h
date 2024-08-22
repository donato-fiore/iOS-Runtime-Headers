// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTEXTEXCLUSIONPATH_H
#define SXTEXTEXCLUSIONPATH_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SXTextExclusionPathWrapper.h"

@interface SXTextExclusionPath : NSObject {
    BOOL _fullBleed;
    int _type;
    int _lineVerticalAlignment;
    CGFloat _padding;
    CGFloat _verticalAlignmentFactor;
    NSString *_componentIdentifier;
    id *_startBlock;
    id *_minYBlock;
    id *_completionBlock;
    SXTextExclusionPathWrapper *_wrapper;
    CGPoint _actualPosition;
    CGPoint _position;
    CGPoint _anchorPoint;
    _NSRange _range;
    UIEdgeInsets _insets;
    CGRect _exclusionRect;
}




-(id)description;


@end


#endif