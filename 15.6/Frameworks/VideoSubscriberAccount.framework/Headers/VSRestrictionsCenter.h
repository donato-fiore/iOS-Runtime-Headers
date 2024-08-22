// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSRESTRICTIONSCENTER_H
#define VSRESTRICTIONSCENTER_H

@class NSString;
@protocol VSManagedProfileConnectionObserver;

#import <Foundation/Foundation.h>

#import "VSManagedProfileConnection.h"

@interface VSRestrictionsCenter : NSObject <VSManagedProfileConnectionObserver>



@property (nonatomic, getter=isAcountModificationAllowed) BOOL accountModificationAllowed; // ivar: _accountModificationAllowed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSManagedProfileConnection *profileConnection; // ivar: _profileConnection
@property (readonly) Class superclass;


+(id)defaultRestrictionsCenter;
-(BOOL)_canInstallAppsAtAll;
-(BOOL)canInstallAppWithRating:(NSInteger)arg0 ;
-(id)init;
-(void)_updateAccountModificationAllowed;
-(void)dealloc;
-(void)profileConnectionProfileChanged:(id)arg0 ;
-(void)profileConnectionSettingsChanged:(id)arg0 ;


@end


#endif