// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSCRIBBLEINTERACTION_H
#define PKSCRIBBLEINTERACTION_H

@class UIView, NSString;
@protocol PKScribbleInteractionWrapperProvider, UIInteraction, PKScribbleInteractionWrapper, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource;

#import <Foundation/Foundation.h>


@interface PKScribbleInteraction : NSObject <PKScribbleInteractionWrapperProvider, UIInteraction>

 {
    id<PKScribbleInteractionWrapper> *_cachedWrapper;
    UIView *_view;
    BOOL _requestElementsShouldCallBackSynchronously;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKScribbleInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PKScribbleInteractionElementSource> *elementSource; // ivar: _elementSource
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view;


-(id)scribbleInteractionWrapper;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif