// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINDIRECTSCRIBBLEINTERACTION_H
#define UIINDIRECTSCRIBBLEINTERACTION_H

@class NSString;
@protocol PKScribbleInteractionWrapperProvider, UIInteraction, UIIndirectScribbleInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIIndirectScribbleInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction>

 {
    NSInteger __handlingWritingCount;
}


@property (readonly, nonatomic, getter=_isDefaultSystemInteraction) BOOL _defaultSystemInteraction; // ivar: __defaultSystemInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<UIIndirectScribbleInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isHandlingWriting, setter=_setHandlingWriting:) BOOL handlingWriting; // ivar: _handlingWriting
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


-(NSInteger)_handlingWritingCount;
-(id)initWithDelegate:(id)arg0 ;
-(id)scribbleInteractionWrapper;
-(void)_setDefaultSystemInteraction:(BOOL)arg0 ;
-(void)_setHandlingWritingCount:(NSInteger)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif