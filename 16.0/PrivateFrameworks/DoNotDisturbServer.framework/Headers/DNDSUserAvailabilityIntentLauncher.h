// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSUSERAVAILABILITYINTENTLAUNCHER_H
#define DNDSUSERAVAILABILITYINTENTLAUNCHER_H

@class INCExtensionConnection, LSApplicationRecord;

#import <Foundation/Foundation.h>


@interface DNDSUserAvailabilityIntentLauncher : NSObject {
    INCExtensionConnection *_connection;
    LSApplicationRecord *_applicationRecord;
    BOOL _available;
    atomic_flag _completionFiredFlag;
}




-(id)initWithApplicationRecord:(id)arg0 available:(BOOL)arg1 ;
-(void)_cleanupWithError:(id)arg0 completion:(id)arg1 ;
-(void)launchIntentExtensionWithCompletion:(id)arg0 ;


@end


#endif