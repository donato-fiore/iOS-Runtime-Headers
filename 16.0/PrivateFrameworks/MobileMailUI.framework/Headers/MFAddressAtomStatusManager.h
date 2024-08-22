// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFADDRESSATOMSTATUSMANAGER_H
#define MFADDRESSATOMSTATUSMANAGER_H

@class EMAccount, MFMessageLoadingContext, NSString, MailAccount, EMSecurityInformation, NSError;
@protocol MFAddressBookClient, MFAddressAtomProvider;

#import <Foundation/Foundation.h>


@interface MFAddressAtomStatusManager : NSObject <MFAddressBookClient>



@property (retain, nonatomic) EMAccount *account; // ivar: _account
@property (weak, nonatomic) NSObject<MFAddressAtomProvider> *atomProvider; // ivar: _atomProvider
@property (weak, nonatomic) MFMessageLoadingContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MailAccount *legacyAccount; // ivar: _legacyAccount
@property (retain, nonatomic) EMSecurityInformation *securityInformation; // ivar: _securityInformation
@property (retain, nonatomic, setter=setSMIMEError:) NSError *smimeError; // ivar: _smimeError
@property (readonly) Class superclass;


-(BOOL)_atomContainsVIPSender:(id)arg0 ;
-(id)initWithAccount:(id)arg0 ;
-(id)otherSigners;
-(int)actionForTrustInformation:(id)arg0 ;
-(void)_commonInit;
-(void)_invalidateAtoms;
-(void)_legacyAccountsDidChange:(id)arg0 ;
-(void)_trustDidChange:(id)arg0 ;
-(void)_updateAtomsInList:(id)arg0 ;
-(void)_updateOtherSignersList:(id)arg0 ;
-(void)_updateVIPStatus;
-(void)_vipSendersDidChange:(id)arg0 ;
-(void)addressBookManager:(id)arg0 addressBookDidChange:(*void)arg1 ;
-(void)addressBookPreferencesChangedForAddressBookManager:(id)arg0 ;
-(void)dealloc;
-(void)updateTrustForDisplayedAtoms;
-(void)updateWithSecurityInformation:(id)arg0 ;


@end


#endif