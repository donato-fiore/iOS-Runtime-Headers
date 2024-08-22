// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCUIFOCUSENABLEMENTINDICATORSYSTEMAPERTUREMANAGER_H
#define FCUIFOCUSENABLEMENTINDICATORSYSTEMAPERTUREMANAGER_H

@class NSString;
@protocol FCActivityManagerObserving, SAElementRegistering, SAInvalidatable;


#import "FCUIFocusEnablementIndicatorManager.h"
#import "FCUIFocusEnablementIndicatorSystemApertureElement.h"

@interface FCUIFocusEnablementIndicatorSystemApertureManager : FCUIFocusEnablementIndicatorManager <FCActivityManagerObserving>

 {
    id<SAElementRegistering> *_elementRegistrar;
    id<SAInvalidatable> *_registeredElementAssertion;
    FCUIFocusEnablementIndicatorSystemApertureElement *_lastPresentedElement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)managerWithSystemApertureElementRegistrar:(id)arg0 ;
-(BOOL)shouldKeepPresentingAfterActiveActivityDidChange:(id)arg0 lastActivity:(id)arg1 ;
-(id)_initWithSystemApertureElementRegistrar:(id)arg0 ;
-(void)postActivity:(id)arg0 enabled:(BOOL)arg1 ;
-(void)revokeWithReason:(id)arg0 ;


@end


#endif