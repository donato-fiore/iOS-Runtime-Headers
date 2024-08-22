// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISCRIBBLEINTERACTION_H
#define UISCRIBBLEINTERACTION_H

@class NSString;
@protocol PKScribbleInteractionWrapperProvider, UIInteraction, UIScribbleInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIScribbleInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction>



@property (readonly, nonatomic, getter=_isDefaultSystemInteraction) BOOL _defaultSystemInteraction; // ivar: __defaultSystemInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<UIScribbleInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isHandlingWriting) BOOL handlingWriting; // ivar: _handlingWriting
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


+(BOOL)isPencilInputExpected;
+(CGFloat)_recommendedBlankSpaceHeight;
+(void)_lastEventSourceChanged:(NSInteger)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)scribbleInteractionWrapper;
-(void)_setDefaultSystemInteraction:(BOOL)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif