// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKSCREENUNLOCKREQUEST_H
#define SBLOCKSCREENUNLOCKREQUEST_H

@class NSString, BSProcessHandle;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SBApplication.h"

@interface SBLockScreenUnlockRequest : NSObject <NSCopying>



@property (nonatomic) BOOL confirmedNotInPocket; // ivar: _confirmedNotInPocket
@property (retain, nonatomic) SBApplication *destinationApplication; // ivar: _destinationApplication
@property (nonatomic) BOOL forceAlertAuthenticationUI; // ivar: _forceAlertAuthenticationUI
@property (nonatomic) int intent; // ivar: _intent
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) BSProcessHandle *process; // ivar: _process
@property (nonatomic) int source; // ivar: _source
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL wantsBiometricPresentation; // ivar: _wantsBiometricPresentation


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif