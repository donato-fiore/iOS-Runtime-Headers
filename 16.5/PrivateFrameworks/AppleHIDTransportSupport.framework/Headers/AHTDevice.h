// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AHTDEVICE_H
#define AHTDEVICE_H



#import "AHTCommon.h"

@interface AHTDevice : AHTCommon



+(id)allDevices;
+(id)deviceWithParentRegistryId:(NSUInteger)arg0 ;
+(id)withName:(id)arg0 ;
+(id)withService:(unsigned int)arg0 ;
-(BOOL)getPower:(*NSInteger)arg0 ;
-(BOOL)reset;
-(BOOL)setPower:(NSInteger)arg0 ;
-(id)description;
-(id)getBootLoader;
-(id)getInterface:(unsigned char)arg0 ;
-(id)getInterfaceWithName:(id)arg0 ;
-(id)getInterfaces;
-(id)initWithService:(unsigned int)arg0 ;
-(id)reporterResults;


@end


#endif