// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITORLOOKTRANSITION_H
#define PREDITORLOOKTRANSITION_H

@class NSString;
@protocol BSDescriptionStreamable, PREditingStandaloneLabelViewTransitioning, CSProminentDisplayTransitioning;

#import <Foundation/Foundation.h>

#import "PREditorLookSwitchingComplicationTransition.h"
#import "PREditingLook.h"
#import "PREditorFixedTimeTransition.h"

@interface PREditorLookTransition : NSObject <BSDescriptionStreamable>



@property (retain, nonatomic) PREditorLookSwitchingComplicationTransition *complicationTransition; // ivar: _complicationTransition
@property (readonly, copy, nonatomic) PREditingLook *currentLook; // ivar: _currentLook
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) PREditingLook *destinationLook; // ivar: _destinationLook
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PREditingStandaloneLabelViewTransitioning> *lookNameTransition; // ivar: _lookNameTransition
@property (retain, nonatomic) NSObject<CSProminentDisplayTransitioning> *subtitleStyleTransition; // ivar: _subtitleStyleTransition
@property (readonly) Class superclass;
@property (retain, nonatomic) PREditorFixedTimeTransition *timeScrollingTransition; // ivar: _timeScrollingTransition
@property (retain, nonatomic) NSObject<CSProminentDisplayTransitioning> *timeStyleTransition; // ivar: _timeStyleTransition


-(BOOL)matchesCurrentLook:(id)arg0 destinationLook:(id)arg1 ;
-(id)initWithCurrentLook:(id)arg0 destinationLook:(id)arg1 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(CGFloat)arg0 ;


@end


#endif