// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBEXTERNALDISPLAYEDUCATIONOBSERVER_H
#define SBEXTERNALDISPLAYEDUCATIONOBSERVER_H

@class BSSimpleAssertion, NSString;
@protocol SBDisplayManagerObserver, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBExternalDisplayEducationObserver : NSObject <SBDisplayManagerObserver>

 {
    id<BSInvalidatable> *_managerObserverToken;
    BSSimpleAssertion *_awaitingPresentationAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDisplayManager:(id)arg0 awaitingPresentationAssertion:(id)arg1 ;
-(void)dealloc;
-(void)displayManager:(id)arg0 didConnectToRootDisplay:(id)arg1 ;
-(void)invalidateAssertionIfNeeded;


@end


#endif