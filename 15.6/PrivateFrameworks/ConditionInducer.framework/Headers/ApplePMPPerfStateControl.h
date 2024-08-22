// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPLEPMPPERFSTATECONTROL_H
#define APPLEPMPPERFSTATECONTROL_H


#import <Foundation/Foundation.h>


@interface ApplePMPPerfStateControl : NSObject {
    unsigned int _connection;
    unsigned int _powerState;
    NSUInteger _nDomains;
    BOOL _isSupported;
    unsigned int _currentPMPVersion;
    ? _domainInfos;
}




-(BOOL)_disableConsistentPerfState;
-(BOOL)_enableConsistentPerfState:(unsigned int)arg0 ;
-(BOOL)_open:(unsigned int)arg0 ;
-(BOOL)setupConnectionForPowerState:(unsigned int)arg0 ;
-(void)_copySelectorsForService;
-(void)tearDown;


@end


#endif