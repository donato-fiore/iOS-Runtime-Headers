// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKFAKEVOICEMEMOSDELEGATE_H
#define PKFAKEVOICEMEMOSDELEGATE_H

@class UIView, NSString;
@protocol PKScribbleInteractionDelegate;

#import <Foundation/Foundation.h>


@interface PKFakeVoiceMemosDelegate : NSObject <PKScribbleInteractionDelegate>

 {
    UIView *_view;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithView:(id)arg0 ;
-(struct UIEdgeInsets )_scribbleInteraction:(id)arg0 hitToleranceInsetsForElement:(id)arg1 defaultInsets:(struct UIEdgeInsets )arg2 ;


@end


#endif