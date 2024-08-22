// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDISPLAYASSERTIONCOORDINATOR_H
#define SBDISPLAYASSERTIONCOORDINATOR_H

@class NSMutableDictionary, NSString;
@protocol _SBDisplayAssertionStackDelegate, SBDisplayAssertionProviding, SBDisplayAssertionCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface SBDisplayAssertionCoordinator : NSObject <_SBDisplayAssertionStackDelegate, SBDisplayAssertionProviding>

 {
    NSMutableDictionary *_assertionStackMap;
    NSMutableDictionary *_assertionPreferencesMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBDisplayAssertionCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_createDisplayAssertionStackForRootDisplay:(id)arg0 ;
-(id)acquireAssertionForDisplay:(id)arg0 level:(NSUInteger)arg1 deactivationReasons:(NSUInteger)arg2 delegate:(id)arg3 ;
-(id)init;
-(void)assertionStack:(id)arg0 activeAssertionPreferencesHaveChanged:(id)arg1 ;
-(void)dealloc;
-(void)invalidateAssertionForDerivedDisplayDisconnect:(id)arg0 ;
-(void)rootDisplayDidConnect:(id)arg0 ;
-(void)rootDisplayDidDisconnect:(id)arg0 ;


@end


#endif