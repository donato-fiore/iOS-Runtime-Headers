// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSSYSTEMCONFIGURATION_H
#define PSSYSTEMCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface PSSystemConfiguration : NSObject {
    *__SCPreferences _prefs;
}




+(id)sharedInstance;
-(id)interfaceConfigurationValueForKey:(struct __CFString *)arg0 serviceID:(struct __CFString *)arg1 ;
-(id)protocolConfiguration:(struct __CFString *)arg0 serviceID:(struct __CFString *)arg1 ;
-(id)protocolConfigurationValueForKey:(struct __CFString *)arg0 protocolType:(struct __CFString *)arg1 serviceID:(struct __CFString *)arg2 ;
-(struct __CFString *)dataServiceID;
-(struct __CFString *)getServiceIDForPDPContext:(unsigned int)arg0 ;
-(struct __CFString *)voicemailServiceID;
-(unsigned char)synchronizeForWriting:(BOOL)arg0 ;
-(void)cleanupPrefs;
-(void)dealloc;
-(void)setInterfaceConfigurationValue:(id)arg0 forKey:(struct __CFString *)arg1 serviceID:(struct __CFString *)arg2 ;
-(void)setProtocolConfiguration:(id)arg0 protocolType:(struct __CFString *)arg1 serviceID:(struct __CFString *)arg2 ;
-(void)setProtocolConfigurationValue:(id)arg0 forKey:(struct __CFString *)arg1 protocolType:(struct __CFString *)arg2 serviceID:(struct __CFString *)arg3 ;


@end


#endif