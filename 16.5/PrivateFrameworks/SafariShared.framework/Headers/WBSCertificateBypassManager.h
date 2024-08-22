// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCERTIFICATEBYPASSMANAGER_H
#define WBSCERTIFICATEBYPASSMANAGER_H

@class NSMutableDictionary, WBSCoalescedAsynchronousWriter;

#import <Foundation/Foundation.h>


@interface WBSCertificateBypassManager : NSObject {
    NSMutableDictionary *_bypassedHostsToCertificateExceptions;
    NSMutableDictionary *_bypassedHostsToCertificateExceptionsInPrivateBrowsing;
    WBSCoalescedAsynchronousWriter *_plistWriter;
}




+(id)sharedManager;
-(BOOL)_didCertificatExceptionsApplySuccessfully:(id)arg0 protectionSpace:(id)arg1 ;
-(BOOL)didInvalidCertificateExceptionsApplySuccessfullyForProtectionSpace:(id)arg0 inPrivateBrowsing:(BOOL)arg1 ;
-(id)_hostAndPortForProtectionSpace:(id)arg0 ;
-(id)_readStateFromStorage;
-(id)init;
-(void)_clearBypassesInRelationToDate:(id)arg0 comparison:(NSInteger)arg1 ;
-(void)clearAllCertificateBypasses;
-(void)clearCertificateBypassesCreatedAfterDate:(id)arg0 ;
-(void)clearCertificateBypassesCreatedBeforeDate:(id)arg0 ;
-(void)clearCertificateBypassesForHostIfNecessary:(id)arg0 withTrust:(struct __SecTrust *)arg1 ;
-(void)rememberCertificateBypassForProtectionSpace:(id)arg0 inPrivateBrowsing:(BOOL)arg1 ;
-(void)savePendingChangesBeforeTermination;


@end


#endif