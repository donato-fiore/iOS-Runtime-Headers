// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBACKLIGHTSIGNIFICANTUSERINTERACTIONMONITOR_H
#define SBBACKLIGHTSIGNIFICANTUSERINTERACTIONMONITOR_H

@class NSHashTable, NSString, CSCoverSheetViewController;
@protocol CSExternalEventHandling;

#import <Foundation/Foundation.h>


@interface SBBacklightSignificantUserInteractionMonitor : NSObject <CSExternalEventHandling>

 {
    NSHashTable *_observers;
}


@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (weak, nonatomic) CSCoverSheetViewController *coverSheetViewController; // ivar: _coverSheetViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(void)_notifyObserversOfSignificantUserInteraction;
-(void)addObserver:(id)arg0 ;
-(void)conformsToCSEventHandling;
-(void)removeObserver:(id)arg0 ;


@end


#endif