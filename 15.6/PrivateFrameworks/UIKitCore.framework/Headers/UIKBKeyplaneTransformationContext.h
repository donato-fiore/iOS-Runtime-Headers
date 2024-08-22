// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBKEYPLANETRANSFORMATIONCONTEXT_H
#define UIKBKEYPLANETRANSFORMATIONCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIKBTree.h"
#import "UIKBScreenTraits.h"

@interface UIKBKeyplaneTransformationContext : NSObject

@property (retain, nonatomic) UIKBTree *activeKeyboard; // ivar: _activeKeyboard
@property (retain, nonatomic) UIKBTree *activeKeyplane; // ivar: _activeKeyplane
@property (retain, nonatomic) NSString *currentKeyplaneName; // ivar: _currentKeyplaneName
@property (nonatomic) CGSize keyboardSize; // ivar: _keyboardSize
@property (nonatomic) CGFloat resizingOffset; // ivar: _resizingOffset
@property (retain, nonatomic) UIKBScreenTraits *screenTraits; // ivar: _screenTraits
@property (nonatomic) BOOL usesScriptSwitch; // ivar: _usesScriptSwitch




@end


#endif