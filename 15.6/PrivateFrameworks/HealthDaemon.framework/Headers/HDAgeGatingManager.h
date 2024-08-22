// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDAGEGATINGMANAGER_H
#define HDAGEGATINGMANAGER_H

@class NSString;
@protocol HDProfileReadyObserver, HDDatabaseProtectedDataObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDAgeGatingManager : NSObject <HDProfileReadyObserver, HDDatabaseProtectedDataObserver>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    int _significantTimeChangeNotificationToken;
    int _userCharacteristicsDidChangeNotificationToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)ageInYearsWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 queue:(id)arg1 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)didRecieveDayChangeNotification:(id)arg0 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)unitTesting_updateAgeGates;


@end


#endif