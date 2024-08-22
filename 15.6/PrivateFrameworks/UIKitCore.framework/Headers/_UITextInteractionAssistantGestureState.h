// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTINTERACTIONASSISTANTGESTURESTATE_H
#define _UITEXTINTERACTIONASSISTANTGESTURESTATE_H


#import <Foundation/Foundation.h>


@interface _UITextInteractionAssistantGestureState : NSObject

@property (nonatomic) BOOL hasExternalInteractions; // ivar: _hasExternalInteractions
@property (nonatomic) BOOL isFirstResponder; // ivar: _isFirstResponder
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) BOOL viewCanBecomeEditable; // ivar: _viewCanBecomeEditable
@property (nonatomic) BOOL viewIsEditable; // ivar: _viewIsEditable


-(BOOL)isEqual:(id)arg0 ;


@end


#endif