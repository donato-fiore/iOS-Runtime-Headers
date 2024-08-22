// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GESTALTHLPRDEVICEIDENTITY_H
#define GESTALTHLPRDEVICEIDENTITY_H


#import <Foundation/Foundation.h>


@interface GestaltHlprDeviceIdentity : NSObject



+(id)getSharedInstance;
-(BOOL)getBoolAnswer:(struct __CFString *)arg0 ;
-(id)copyAnswer:(struct __CFString *)arg0 ;
-(id)copyDeviceIDInfo:(*id)arg0 ;
-(id)copyDeviceInfo:(*id)arg0 ;
-(id)copyRegulatoryImagesInfo:(*id)arg0 ;
-(void)addAGestaltKey:(struct __CFString *)arg0 toDictionary:(id)arg1 required:(BOOL)arg2 errors:(id)arg3 ;
-(void)updateRecertInfo:(id)arg0 errors:(*id)arg1 ;


@end


#endif