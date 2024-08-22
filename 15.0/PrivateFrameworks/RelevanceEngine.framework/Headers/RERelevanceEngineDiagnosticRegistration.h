// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RERELEVANCEENGINEDIAGNOSTICREGISTRATION_H
#define RERELEVANCEENGINEDIAGNOSTICREGISTRATION_H



#import "RESingleton.h"

@interface RERelevanceEngineDiagnosticRegistration : RESingleton {
    BOOL _supportsRegistration;
}




-(id)_allProcesses;
-(id)_defaultRegistrationDirectory;
-(id)_init;
-(id)_processesFileURL;
-(void)_accessEngineDataForProcess:(id)arg0 usingBlock:(id)arg1 ;
-(void)checkinEngine:(id)arg0 ;
-(void)enumerateAvailableEngines:(id)arg0 ;


@end


#endif