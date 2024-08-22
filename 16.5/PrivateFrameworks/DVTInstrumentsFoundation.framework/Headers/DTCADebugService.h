// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTCADEBUGSERVICE_H
#define DTCADEBUGSERVICE_H

@class NSMutableDictionary;


#import "DTGraphicsService.h"

@interface DTCADebugService : DTGraphicsService

@property (retain, nonatomic) NSMutableDictionary *enabledSwitches; // ivar: _enabledSwitches


+(void)registerCapabilities:(id)arg0 ;
-(BOOL)_switchNamed:(id)arg0 toDebugOption:(*unsigned int)arg1 ;
-(id)availableStatistics;
-(id)driverNames;
-(id)initWithChannel:(id)arg0 ;
-(id)valueForSwitch:(id)arg0 ;
-(void)_collectData;
-(void)cleanup;
-(void)cleanupSwitches;
-(void)dealloc;
-(void)setValue:(id)arg0 forSwitchName:(id)arg1 ;


@end


#endif