// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUICLASSROOMVISIBILITYARBITRATOR_H
#define PSUICLASSROOMVISIBILITYARBITRATOR_H

@class NSString;
@protocol CRKSettingsUIVisibilityProvider;

#import <Foundation/Foundation.h>


@interface PSUIClassroomVisibilityArbitrator : NSObject

@property (copy, nonatomic) NSString *paneStatus; // ivar: _paneStatus
@property (copy, nonatomic) id *paneStatusChangeHandler; // ivar: _paneStatusChangeHandler
@property (retain, nonatomic) NSObject<CRKSettingsUIVisibilityProvider> *visibilityProvider; // ivar: _visibilityProvider
@property (nonatomic) NSUInteger visibilityState; // ivar: _visibilityState
@property (copy, nonatomic) id *visibilityStateChangeHandler; // ivar: _visibilityStateChangeHandler


-(id)init;
-(void)connectToDaemon;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reloadVisibilityState;
-(void)startObservingVisibilityProvider;
-(void)stopObservingVisibilityProvider;
-(void)updatePaneStatus;


@end


#endif