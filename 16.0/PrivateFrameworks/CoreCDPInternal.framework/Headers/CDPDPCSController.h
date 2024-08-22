// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDPDPCSCONTROLLER_H
#define CDPDPCSCONTROLLER_H

@class CDPContext;
@protocol CDPProtectedCloudStorageProxy;

#import <Foundation/Foundation.h>


@interface CDPDPCSController : NSObject

@property (retain, nonatomic) CDPContext *context; // ivar: _context
@property (retain, nonatomic) NSObject<CDPProtectedCloudStorageProxy> *pcsProxy; // ivar: _pcsProxy


-(BOOL)isCloudProtectionEnabledLocally:(*id)arg0 ;
-(BOOL)isCompanionInKeychainCircle:(*id)arg0 ;
-(id)init;
-(id)initWithContext:(id)arg0 pcsProxy:(id)arg1 ;
-(struct _PCSIdentitySetData *)_getOrSetupIdentitySetRef:(*id)arg0 ;
-(void)_checkiCDPStatusNetwork:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_enableCDPWithCompletion:(id)arg0 ;
-(void)_reauthenticateAndCheckiCDPStatusWithNetwork:(BOOL)arg0 completion:(id)arg1 ;
-(void)checkiCDPStatusNetwork:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)enableCDPWithCompletion:(id)arg0 ;
-(void)recoverAndSynchronizeKeysWithCompletion:(id)arg0 ;
-(void)recoverKeysWithCompletion:(id)arg0 ;


@end


#endif