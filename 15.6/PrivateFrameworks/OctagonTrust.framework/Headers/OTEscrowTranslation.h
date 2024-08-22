// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OTESCROWTRANSLATION_H
#define OTESCROWTRANSLATION_H


#import <Foundation/Foundation.h>


@interface OTEscrowTranslation : NSObject



+(BOOL)supportedRestorePath:(id)arg0 ;
+(id)CDPRecordContextToDictionary:(id)arg0 ;
+(id)_dateWithSecureBackupDateString:(id)arg0 ;
+(id)_stringWithSecureBackupDate:(id)arg0 ;
+(id)cdpRecoveryInformationToDictionary:(id)arg0 ;
+(id)dictionaryToCDPRecordContext:(id)arg0 ;
+(id)dictionaryToCDPRecoveryInformation:(id)arg0 ;
+(id)dictionaryToEscrowAuthenticationInfo:(id)arg0 ;
+(id)dictionaryToEscrowRecord:(id)arg0 ;
+(id)dictionaryToMetadata:(id)arg0 ;
+(id)escrowAuthenticationInfoToDictionary:(id)arg0 ;
+(id)escrowRecordToDictionary:(id)arg0 ;
+(id)metadataToDictionary:(id)arg0 ;


@end


#endif