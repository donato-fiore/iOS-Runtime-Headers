// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSVIEWUSERACTIVITYMANAGER_H
#define PKPASSVIEWUSERACTIVITYMANAGER_H

@class NSUserActivity, NSString;
@protocol PKForegroundActiveArbiterObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKPassViewUserActivityManager : NSObject <PKForegroundActiveArbiterObserver>

 {
    NSUserActivity *_currentUserActivity;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isForegroundActive;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_shouldDonateActivity:(id)arg0 ;
-(id)_currentUserActivityPassUniqueID;
-(id)_displayNameForPass:(id)arg0 ;
-(id)_init;
-(id)_templateNameForPass:(id)arg0 ;
-(id)init;
-(void)_endedViewingPass;
-(void)dealloc;
-(void)endedViewingPass;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)startedViewingPass:(id)arg0 ;


@end


#endif