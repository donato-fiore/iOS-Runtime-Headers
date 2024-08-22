// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDMIGRATIONMANAGER_H
#define HDMIGRATIONMANAGER_H

@class NSString;
@protocol HDContentProtectionObserver, HDProfileReadyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDMigrationManager : NSObject <HDContentProtectionObserver, HDProfileReadyObserver>

 {
    BOOL _needsProtectedDataMigration;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 ;
-(void)contentProtectionStateChanged:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)dealloc;
-(void)performMigrationWithCompletion:(id)arg0 ;
-(void)profileDidBecomeReady:(id)arg0 ;


@end


#endif