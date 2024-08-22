// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMANAGEDCONFIGURATIONUPDATESOURCE_H
#define ATXMANAGEDCONFIGURATIONUPDATESOURCE_H

@class MCProfileConnection;
@protocol ATXUpdatePredictionsSource, ATXUpdatePredictionsDelegate;

#import <Foundation/Foundation.h>


@interface ATXManagedConfigurationUpdateSource : NSObject <ATXUpdatePredictionsSource>

 {
    id *_restrictionChangedNotificationToken;
}


@property (weak, nonatomic) NSObject<ATXUpdatePredictionsDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) MCProfileConnection *profileConnection; // ivar: _profileConnection


-(id)init;
-(id)initWithProfileConnection:(id)arg0 ;
-(void)_registerForRestrictionChangedNotifications;
-(void)handleProfileChangedNotification;


@end


#endif