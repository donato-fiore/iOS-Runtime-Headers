// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKAPPLICATIONSTATEMONITOR_H
#define GKAPPLICATIONSTATEMONITOR_H

@class NSString, NSMutableSet, RBSProcessMonitor;
@protocol LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>


@interface GKApplicationStateMonitor : NSObject <LSApplicationWorkspaceObserverProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<LSApplicationWorkspaceObserverProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *interestedBundleIDs; // ivar: _interestedBundleIDs
@property (retain, nonatomic) RBSProcessMonitor *processMonitor; // ivar: _processMonitor
@property (readonly) Class superclass;


-(BOOL)observingStateChangesForBundleID:(id)arg0 ;
-(id)init;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)applicationsWillUninstall:(id)arg0 ;
-(void)dealloc;
-(void)startObservingApplicationWorkspaceChanges;
-(void)startObservingStateChangesForBundleID:(id)arg0 ;


@end


#endif