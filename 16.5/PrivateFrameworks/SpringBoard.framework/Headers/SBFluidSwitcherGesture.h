// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLUIDSWITCHERGESTURE_H
#define SBFLUIDSWITCHERGESTURE_H

@class NSString, UIGestureRecognizer;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBAppLayout.h"

@interface SBFluidSwitcherGesture : NSObject <BSDescriptionProviding>

 {
    id *_eventProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic, setter=_setGestureRecognizerForStudyLog:) UIGestureRecognizer *gestureRecognizerForStudyLog; // ivar: _gestureRecognizerForStudyLog
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=_setSelectedAppLayout:) SBAppLayout *selectedAppLayout; // ivar: _selectedAppLayout
@property (nonatomic, setter=_setSelectedLayoutRole:) NSInteger selectedLayoutRole; // ivar: _selectedLayoutRole
@property (nonatomic, setter=_setState:) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)gestureEvent;
-(id)initWithType:(NSInteger)arg0 eventProvider:(id)arg1 ;
-(id)studyLogData;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif