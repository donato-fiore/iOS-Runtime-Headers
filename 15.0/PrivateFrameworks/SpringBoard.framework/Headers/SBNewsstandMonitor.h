// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBNEWSSTANDMONITOR_H
#define SBNEWSSTANDMONITOR_H

@class NSArray, NSString;
@protocol FBProcessManagerObserver, FBProcessObserver;

#import <Foundation/Foundation.h>


@interface SBNewsstandMonitor : NSObject <FBProcessManagerObserver, FBProcessObserver>

 {
    NSArray *_deniedBundleIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_deniedBundleIdentifiers;
+(id)sharedInstance;
-(id)init;
-(void)_addObserverForBackgroundUpdateDenyListChange;
-(void)_handleBackgroundUpdateDenyListChange;
-(void)process:(id)arg0 stateDidChangeFromState:(id)arg1 toState:(id)arg2 ;
-(void)processManager:(id)arg0 didAddProcess:(id)arg1 ;
-(void)processManager:(id)arg0 didRemoveProcess:(id)arg1 ;


@end


#endif