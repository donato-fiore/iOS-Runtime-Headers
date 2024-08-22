// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIACCESSIBILITYOPAQUEFOCUSSTATE_H
#define UIACCESSIBILITYOPAQUEFOCUSSTATE_H

@class UIView;

#import <Foundation/Foundation.h>


@interface UIAccessibilityOpaqueFocusState : NSObject

@property (weak, nonatomic) id *element; // ivar: _element
@property (nonatomic) BOOL hasBeenReused; // ivar: _hasBeenReused
@property (nonatomic) BOOL hasFocus; // ivar: _hasFocus
@property (retain, nonatomic) UIView *reusableView; // ivar: _reusableView
@property (nonatomic) CGRect sceneRelativeFrame; // ivar: _sceneRelativeFrame


-(id)description;


@end


#endif