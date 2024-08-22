// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMEDUSADRAGWINDOWCONTEXT_H
#define SBMEDUSADRAGWINDOWCONTEXT_H

@class UIWindow<SBIconDragPreviewContaining>, SBFTraitsParticipant;

#import <Foundation/Foundation.h>

#import "SBTraitsWindowParticipantDelegate.h"

@interface SBMedusaDragWindowContext : NSObject

@property (readonly, nonatomic) UIWindow<SBIconDragPreviewContaining> *dragWindow; // ivar: _dragWindow
@property (readonly, nonatomic) SBFTraitsParticipant *traitsParticipant; // ivar: _traitsParticipant
@property (readonly, nonatomic) SBTraitsWindowParticipantDelegate *traitsParticipantDelegate; // ivar: _traitsParticipantDelegate


-(id)initWithDragWindow:(id)arg0 traitsParticipant:(id)arg1 traitsParticipantDelegate:(id)arg2 ;


@end


#endif