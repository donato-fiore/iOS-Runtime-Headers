// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUHARDWAREVOLUMEASSERTION_H
#define MRUHARDWAREVOLUMEASSERTION_H

@class NSString;
@protocol BSInvalidatable, MPVolumeControllerDataSource;

#import <Foundation/Foundation.h>

#import "MRUHardwareVolumeController.h"

@interface MRUHardwareVolumeAssertion : NSObject <BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) MRUHardwareVolumeController *hardwareVolumeController; // ivar: _hardwareVolumeController
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<MPVolumeControllerDataSource> *volumeDataSource; // ivar: _volumeDataSource


-(id)initWithHardwareVolumeController:(id)arg0 volumeDataSource:(id)arg1 reason:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif