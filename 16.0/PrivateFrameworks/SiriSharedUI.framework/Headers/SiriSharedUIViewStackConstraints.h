// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRISHAREDUIVIEWSTACKCONSTRAINTS_H
#define SIRISHAREDUIVIEWSTACKCONSTRAINTS_H

@class NSLayoutConstraint;

#import <Foundation/Foundation.h>


@interface SiriSharedUIViewStackConstraints : NSObject

@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint; // ivar: _leadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint; // ivar: _trailingConstraint


+(id)constraints;


@end


#endif