// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IAMIMPRESSIONMANAGER_H
#define IAMIMPRESSIONMANAGER_H

@class NSMutableDictionary;
@protocol IAMImpressionManagerDelegate;

#import <Foundation/Foundation.h>


@interface IAMImpressionManager : NSObject {
    NSMutableDictionary *_activeImpressionForMessageIdentifierFromTargetIdentifier;
    NSMutableDictionary *_inactiveImpressionForMessageIdentifierFromTargetIdentifier;
    BOOL _isApplicationActive;
    os_unfair_lock_s _lock;
}


@property (weak, nonatomic) NSObject<IAMImpressionManagerDelegate> *delegate; // ivar: _delegate


-(BOOL)_endImpressionForMessageWithIdentifier:(id)arg0 fromTargetWithIdentifier:(id)arg1 displayEndTime:(id)arg2 ;
-(BOOL)_startImpressionForMessageEntry:(id)arg0 fromTargetWithIdentifier:(id)arg1 displayStartTime:(id)arg2 ;
-(id)init;
-(void)_handleApplicationDidBecomeActive;
-(void)_handleApplicationWillResignActive;
-(void)_reportImpression:(id)arg0 ;
-(void)_reportImpressionEventWithDictionary:(id)arg0 ;
-(void)_transitionToActiveState;
-(void)_transitionToInactiveState;
-(void)dealloc;
-(void)messageEntry:(id)arg0 didAppearFromTargetWithIdentifier:(id)arg1 atTime:(id)arg2 ;
-(void)messageWithIdentifier:(id)arg0 didDisappearFromTargetWithIdentifier:(id)arg1 atTime:(id)arg2 ;


@end


#endif