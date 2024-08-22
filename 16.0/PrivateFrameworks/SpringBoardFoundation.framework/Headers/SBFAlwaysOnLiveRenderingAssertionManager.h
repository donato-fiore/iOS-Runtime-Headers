// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFALWAYSONLIVERENDERINGASSERTIONMANAGER_H
#define SBFALWAYSONLIVERENDERINGASSERTIONMANAGER_H

@class NSMapTable, NSString;
@protocol BLSAssertionObserving;

#import <Foundation/Foundation.h>


@interface SBFAlwaysOnLiveRenderingAssertionManager : NSObject <BLSAssertionObserving>

 {
    NSMapTable *_sceneUIAssertions;
    NSMapTable *_sceneFBSAssertions;
    NSMapTable *_sceneAssertions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)acquireLiveRenderingAssertionForFBSScene:(id)arg0 reason:(id)arg1 ;
-(id)acquireLiveRenderingAssertionForUIScene:(id)arg0 reason:(id)arg1 ;
-(id)init;
-(void)_invalidateAllAssertionsInTable:(id)arg0 ;
-(void)assertion:(id)arg0 didCancelWithError:(id)arg1 ;
-(void)assertionWasAcquired:(id)arg0 ;
-(void)invalidateAllAssertions;


@end


#endif