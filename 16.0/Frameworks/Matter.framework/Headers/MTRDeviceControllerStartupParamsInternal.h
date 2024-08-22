// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDEVICECONTROLLERSTARTUPPARAMSINTERNAL_H
#define MTRDEVICECONTROLLERSTARTUPPARAMSINTERNAL_H



#import "MTRDeviceControllerStartupParams.h"

@interface MTRDeviceControllerStartupParamsInternal : MTRDeviceControllerStartupParams

@property (readonly, nonatomic) Optional<unsigned char> fabricIndex; // ivar: _fabricIndex
@property (readonly, nonatomic) *void fabricTable; // ivar: _fabricTable
@property (readonly, nonatomic) *OperationalKeystore keystore; // ivar: _keystore


-(BOOL)keypairsMatchCertificates;
-(id)initForExistingFabric:(*void)arg0 fabricIndex:(unsigned char)arg1 keystore:(struct OperationalKeystore *)arg2 params:(id)arg3 ;
-(id)initForNewFabric:(*void)arg0 keystore:(struct OperationalKeystore *)arg1 params:(id)arg2 ;
-(id)initWithParams:(id)arg0 ;


@end


#endif