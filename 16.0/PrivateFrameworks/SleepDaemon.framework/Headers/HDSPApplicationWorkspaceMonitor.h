// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPAPPLICATIONWORKSPACEMONITOR_H
#define HDSPAPPLICATIONWORKSPACEMONITOR_H

@class NSString, HKSPObserverSet;
@protocol LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>


@interface HDSPApplicationWorkspaceMonitor : NSObject <LSApplicationWorkspaceObserverProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKSPObserverSet *observers; // ivar: _observers
@property (readonly) Class superclass;


-(BOOL)isApplicationInstalled:(id)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif