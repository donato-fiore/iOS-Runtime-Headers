// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPHOMEMONITOR_H
#define MPHOMEMONITOR_H

@class NSString;
@protocol MPHomeManagerObserverDelegate;

#import <Foundation/Foundation.h>


@interface MPHomeMonitor : NSObject <MPHomeManagerObserverDelegate>

 {
    BOOL _soundCheckCachedValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isSoundCheckEnabled) BOOL soundCheckEnabled;
@property (readonly) Class superclass;


+(BOOL)isCurrentDeviceValidHomeAccessory;
+(id)sharedMonitor;
+(void)setupIfNecessary;
-(id)init;
-(void)_postNotificationWithName:(id)arg0 ;
-(void)currentHomeDidChange;
-(void)currentUserDidChange;
-(void)homeUsersDidChange;
-(void)soundCheckSettingDidUpdate:(BOOL)arg0 ;


@end


#endif