// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFUSERAUTHENTICATIONMODELEDUCATIONALMODE_H
#define SBFUSERAUTHENTICATIONMODELEDUCATIONALMODE_H

@class NSString;
@protocol SBFUserAuthenticationModel, SBFUserAuthenticationModelDelegate;

#import <Foundation/Foundation.h>

#import "SBFMobileKeyBag.h"

@interface SBFUserAuthenticationModelEducationalMode : NSObject <SBFUserAuthenticationModel>

 {
    SBFMobileKeyBag *_keybag;
    BOOL _pendingWipe;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SBFUserAuthenticationModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPermanentlyBlocked) BOOL permanentlyBlocked;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTemporarilyBlocked) BOOL temporarilyBlocked;
@property (readonly, nonatomic) CGFloat timeUntilUnblockedSinceReferenceDate;
@property (readonly, nonatomic, getter=isUserRequestedEraseEnabled) BOOL userRequestedEraseEnabled;


-(id)_refreshStateAndNotify:(BOOL)arg0 ;
-(id)initWithKeyBag:(id)arg0 ;
-(void)_refreshStateForMkbState:(id)arg0 notify:(BOOL)arg1 ;
-(void)noteNewMkbDeviceLockState:(id)arg0 ;
-(void)notePasscodeEntryBegan;
-(void)notePasscodeEntryCancelled;
-(void)notePasscodeUnlockFailedWithError:(id)arg0 ;
-(void)notePasscodeUnlockSucceeded;
-(void)performPasswordTest:(id)arg0 ;
-(void)synchronize;


@end


#endif