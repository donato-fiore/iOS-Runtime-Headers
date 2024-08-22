// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFPDCLOUDSOURCE_H
#define CFPDCLOUDSOURCE_H

@class SYDRemotePreferencesSource;


#import "CFPDContainerSource.h"

@interface CFPDCloudSource : CFPDContainerSource {
    SYDRemotePreferencesSource *cloudSource;
    *__CFString _configurationPath;
}




-(id)copyPropertyListValidatingPlist:(BOOL)arg0 ;
-(id)initWithDomain:(struct __CFString *)arg0 userName:(struct __CFString *)arg1 storeName:(id)arg2 configurationPath:(struct __CFString *)arg3 containerPath:(struct __CFString *)arg4 shmemIndex:(short)arg5 daemon:(id)arg6 ;
-(int)validateMessage:(id)arg0 withNewKey:(id)arg1 newValue:(id)arg2 plistIsAvailableToRead:(BOOL)arg3 containerPath:(char *)arg4 fileUID:(unsigned int)arg5 mode:(unsigned short)arg6 diagnosticMessage:(*char *)arg7 ;
-(struct __CFString *)cloudConfigurationPath;
-(struct __CFString *)debugDump;
-(void)processEndOfMessageIntendingToRemoveSource:(*BOOL)arg0 ;
-(void)synchronizeWithCloud:(id)arg0 replyHandler:(id)arg1 ;


@end


#endif