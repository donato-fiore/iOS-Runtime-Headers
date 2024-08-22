// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCMANAGEDCONFIGURATIONHELPER_H
#define RCMANAGEDCONFIGURATIONHELPER_H

@class NSString;
@protocol MCProfileConnectionObserver, RCManagedConfigurationHelperDelegate;

#import <Foundation/Foundation.h>


@interface RCManagedConfigurationHelper : NSObject <MCProfileConnectionObserver>

 {
    BOOL _observing;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RCManagedConfigurationHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)cloudSyncIsAllowed;
-(void)_notifyDelegateOfChange;
-(void)_startObserving;
-(void)_stopObserving;
-(void)dealloc;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif