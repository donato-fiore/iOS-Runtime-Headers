// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCPNATURALINPUTCOLLECTIONEVENTSTREAM_H
#define RCPNATURALINPUTCOLLECTIONEVENTSTREAM_H

@class NSMutableDictionary, NSString, NSMutableArray;
@protocol RCPNaturalInputCollectionEventStreamChildComposer, RCPMachTimestampProvider;

#import <Foundation/Foundation.h>

#import "RCPNaturalInputCollectionSelection.h"
#import "RCPEventSenderProperties.h"

@interface RCPNaturalInputCollectionEventStream : NSObject <RCPNaturalInputCollectionEventStreamChildComposer>



@property (retain) NSMutableDictionary *currentManipulatorsBySourceGroup; // ivar: _currentManipulatorsBySourceGroup
@property NSInteger currentPhase; // ivar: _currentPhase
@property (retain) RCPNaturalInputCollectionSelection *currentSelection; // ivar: _currentSelection
@property CGFloat currentTimeOffset; // ivar: _currentTimeOffset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableArray *eventBuffer; // ivar: _eventBuffer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties; // ivar: _senderProperties
@property (readonly) Class superclass;
@property (retain) NSObject<RCPMachTimestampProvider> *timestampProvider; // ivar: _timestampProvider


-(id)finalizedEvents;
-(id)initWithCurrentTimeOffset:(CGFloat)arg0 timestampProvider:(id)arg1 senderProperties:(id)arg2 ;
-(void)advanceTime:(CGFloat)arg0 ;
-(void)closeManipulatorAtLocation:(struct CGPoint )arg0 withZPosition:(CGFloat)arg1 sourceGroup:(NSInteger)arg2 interactionMethod:(NSInteger)arg3 ;
-(void)commitEvent;
-(void)finish;
-(void)moveManipulatorByDelta:(struct CGVector )arg0 withZDelta:(CGFloat)arg1 sourceGroup:(NSInteger)arg2 interactionMethod:(NSInteger)arg3 ;
-(void)moveManipulatorToLocation:(struct CGPoint )arg0 withZPosition:(CGFloat)arg1 sourceGroup:(NSInteger)arg2 interactionMethod:(NSInteger)arg3 ;
-(void)moveSelectionByDelta:(struct CGVector )arg0 withZDelta:(CGFloat)arg1 ;
-(void)moveSelectionByDelta:(struct CGVector )arg0 zDelta:(CGFloat)arg1 directionDelta:(struct CGVector )arg2 zDirectionDelta:(CGFloat)arg3 ;
-(void)moveSelectionToLocation:(struct CGPoint )arg0 withZPosition:(CGFloat)arg1 ;
-(void)moveSelectionToLocation:(struct CGPoint )arg0 zPosition:(CGFloat)arg1 direction:(struct CGPoint )arg2 zDirection:(CGFloat)arg3 ;
-(void)openManipulatorAtLocation:(struct CGPoint )arg0 withZPosition:(CGFloat)arg1 sourceGroup:(NSInteger)arg2 interactionMethod:(NSInteger)arg3 ;
-(void)updatePhase;


@end


#endif