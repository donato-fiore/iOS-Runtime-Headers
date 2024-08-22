// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPENCILINTERACTION_H
#define UIPENCILINTERACTION_H

@class NSString;
@protocol UIInteraction_Internal, UIInteraction, UIPencilInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIPencilInteraction : NSObject <UIInteraction_Internal, UIInteraction>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIPencilInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


+(BOOL)hasSeenPencilPairingUI;
+(BOOL)prefersPencilOnlyDrawing;
+(NSInteger)preferredTapAction;
+(void)_setPrefersPencilOnlyDrawing:(BOOL)arg0 ;
-(id)init;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToView:(id)arg0 ;
-(void)performDelegateDidTap;
-(void)willMoveToView:(id)arg0 ;


@end


#endif