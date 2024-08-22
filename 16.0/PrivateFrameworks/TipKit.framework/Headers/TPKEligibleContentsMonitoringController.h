// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPKELIGIBLECONTENTSMONITORINGCONTROLLER_H
#define TPKELIGIBLECONTENTSMONITORINGCONTROLLER_H

@class NSString, TPSDuetEventsProvider, NSArray;
@protocol TPSEventsProviderDelegate, TPKEligibleContentsMonitoringControllerDelegate;

#import <Foundation/Foundation.h>

#import "TPKContent.h"

@interface TPKEligibleContentsMonitoringController : NSObject <TPSEventsProviderDelegate>



@property (copy, nonatomic) NSString *context; // ivar: _context
@property (copy, nonatomic) TPKContent *currentContent; // ivar: _currentContent
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TPKEligibleContentsMonitoringControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TPSDuetEventsProvider *duetEventsProvider; // ivar: _duetEventsProvider
@property (copy, nonatomic) NSArray *eligibleContents; // ivar: _eligibleContents
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_currentContentIdentifierForContext:(id)arg0 ;
+(id)_eligibleContentsIdentifierForContext:(id)arg0 ;
+(id)_identifierForContext:(id)arg0 withPrefix:(id)arg1 ;
+(id)_legacyIdentifierForContext:(id)arg0 ;
-(BOOL)conditionsMatchForClientContextEvents:(id)arg0 clientContextMap:(id)arg1 ;
-(id)clientContextKeysForCurrentStateInContents:(id)arg0 ;
-(id)clientContextMatchingResultsForContents:(id)arg0 clientContextKeys:(id)arg1 ;
-(id)contents;
-(id)initWithContext:(id)arg0 ;
-(void)_clearLegacyCachedContent;
-(void)clearContents;
-(void)dataProvider:(id)arg0 didFinishQueryWithResults:(id)arg1 ;
-(void)dataProvider:(id)arg0 didReceiveCallbackWithResult:(id)arg1 ;
-(void)dealloc;
-(void)deregisterAllEventsForCallback;
-(void)didDisplayContent:(id)arg0 ;
-(void)invalidateClientContextIfNeeded;
-(void)manualDismissContent:(id)arg0 ;
-(void)updateCurrentContentCache:(id)arg0 ;
-(void)updateEligibilityWithContents:(id)arg0 ;
-(void)updateEligibleContentsCache:(id)arg0 ;
-(void)updateRegistrableEventsForCallbackIfNeeded;


@end


#endif