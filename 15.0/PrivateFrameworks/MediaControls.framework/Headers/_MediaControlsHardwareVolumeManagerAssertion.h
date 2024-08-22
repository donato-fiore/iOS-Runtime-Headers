// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MEDIACONTROLSHARDWAREVOLUMEMANAGERASSERTION_H
#define _MEDIACONTROLSHARDWAREVOLUMEMANAGERASSERTION_H

@class NSString;
@protocol MediaControlsInvalidatable;

#import <Foundation/Foundation.h>

#import "MediaControlsHardwareVolumeManager.h"

@interface _MediaControlsHardwareVolumeManagerAssertion : NSObject <MediaControlsInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;
@property (weak, nonatomic) MediaControlsHardwareVolumeManager *volumeManager; // ivar: _volumeManager


-(void)dealloc;
-(void)invalidate;


@end


#endif