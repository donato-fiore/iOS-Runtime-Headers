// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSPRIVACYINFOCENTER_H
#define VSPRIVACYINFOCENTER_H

@class NSString;
@protocol VSManagedProfileConnectionObserver;

#import <Foundation/Foundation.h>


@interface VSPrivacyInfoCenter : NSObject <VSManagedProfileConnectionObserver>



@property (nonatomic) NSInteger accountAccessStatus; // ivar: _accountAccessStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int registrationToken; // ivar: _registrationToken
@property (readonly) Class superclass;


+(id)sharedPrivacyInfoCenter;
-(id)init;
-(id)updateAccountAccessStatusWithError:(id)arg0 ;
-(void)_invalidateAccountAccessStatus;
-(void)dealloc;
-(void)profileConnectionProfileChanged:(id)arg0 ;
-(void)profileConnectionSettingsChanged:(id)arg0 ;
-(void)updateAccountAccessStatusWithResponse:(id)arg0 ;


@end


#endif