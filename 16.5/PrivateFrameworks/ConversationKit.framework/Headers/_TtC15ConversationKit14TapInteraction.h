// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15CONVERSATIONKIT14TAPINTERACTION_H
#define _TTC15CONVERSATIONKIT14TAPINTERACTION_H

@class UIView;
@protocol UIInteraction;

#import <Foundation/Foundation.h>


@interface _TtC15ConversationKit14TapInteraction : NSObject <UIInteraction>

 {
    ? tapGestureRecognizer;
}


@property (nonatomic) NSInteger numberOfTapsRequired;
@property (nonatomic, weak) UIView *view; // ivar: view


-(id)init;
-(void)didMoveToView:(id)arg0 ;
-(void)handleRecognizer:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif