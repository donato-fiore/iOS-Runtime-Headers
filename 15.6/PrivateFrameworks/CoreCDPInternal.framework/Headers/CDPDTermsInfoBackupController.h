// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPDTERMSINFOBACKUPCONTROLLER_H
#define CDPDTERMSINFOBACKUPCONTROLLER_H


#import <Foundation/Foundation.h>


@interface CDPDTermsInfoBackupController : NSObject



-(id)_buildSecureBackupTermsInfo:(id)arg0 ;
-(void)fetchTermsAcceptanceForAccount:(id)arg0 completion:(id)arg1 ;
-(void)saveTermsAcceptance:(id)arg0 completion:(id)arg1 ;


@end


#endif