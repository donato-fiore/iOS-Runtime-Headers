// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DICVOLUMECONTROLLER_H
#define DICVOLUMECONTROLLER_H


#import <Foundation/Foundation.h>


@interface DICVolumeController : NSObject



-(BOOL)setVolumeForCategory:(id)arg0 volume:(float)arg1 error:(*id)arg2 ;
-(BOOL)setVolumeForPhoneCall:(float)arg0 error:(*id)arg1 ;
-(id)volumeForCategory:(id)arg0 error:(*id)arg1 ;
-(id)volumeForPhoneCallWithError:(*id)arg0 ;


@end


#endif