// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDCONFIGURATIONUTILS_H
#define MANAGEDCONFIGURATIONUTILS_H

@class NSString, NSArray;
@protocol MCProfileConnectionObserver;

#import <Foundation/Foundation.h>


@interface ManagedConfigurationUtils : NSObject <MCProfileConnectionObserver>

 {
    *void _managedConfigurationDylibHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL diagnosticsAndUsageEnabled; // ivar: _diagnosticsAndUsageEnabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *installedVisibleProfileIdentifiers; // ivar: _installedVisibleProfileIdentifiers
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg0 userInfo:(id)arg1 ;


@end


#endif