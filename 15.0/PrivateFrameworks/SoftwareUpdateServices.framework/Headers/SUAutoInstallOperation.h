// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUAUTOINSTALLOPERATION_H
#define SUAUTOINSTALLOPERATION_H

@class NSString, NSUUID;
@protocol SUAutoInstallOperationClientHandler, NSSecureCoding, SUAutoInstallOperationDelegate;

#import <Foundation/Foundation.h>

#import "SUManagerClient.h"
#import "SUAutoInstallForecast.h"

@interface SUAutoInstallOperation : NSObject <SUAutoInstallOperationClientHandler, NSSecureCoding>

 {
    SUManagerClient *_client;
    BOOL _clientOwned;
}


@property (nonatomic) int agreementStatus; // ivar: _agreementStatus
@property (readonly, nonatomic, getter=isCanceled) BOOL canceled; // ivar: _canceled
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SUAutoInstallOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExpired) BOOL expired; // ivar: _expired
@property (readonly, retain, nonatomic) SUAutoInstallForecast *forecast; // ivar: _forecast
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSUUID *id; // ivar: _id
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)_isDateExpired:(id)arg0 ;
-(BOOL)_isEffectivelyScheduled;
-(BOOL)_isValidTillDate:(id)arg0 ;
-(id)_initWithClient:(id)arg0 clientOwned:(BOOL)arg1 id:(id)arg2 forecast:(id)arg3 agreementStatus:(int)arg4 cancelled:(BOOL)arg5 expired:(BOOL)arg6 ;
-(id)init;
-(id)initWithAutoInstallOperationModel:(id)arg0 client:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)uniqueIdentifier;
-(void)_noteAutoInstallOperationDidExpireWithError:(id)arg0 ;
-(void)_noteAutoInstallOperationIsReadyToInstall:(id)arg0 ;
-(void)_noteAutoInstallOperationPasscodePolicyChanged:(NSUInteger)arg0 ;
-(void)_noteAutoInstallOperationWasCancelled;
-(void)cancel;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif