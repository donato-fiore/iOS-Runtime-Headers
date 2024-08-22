// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDTINKERPROFILE_H
#define HDTINKERPROFILE_H



#import "HDProfile.h"

@interface HDTinkerProfile : HDProfile



-(BOOL)setDSID:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPairedNRDeviceUUID:(id)arg0 error:(*id)arg1 ;
-(id)dsidWithError:(*id)arg0 ;
-(id)pairedNRDeviceUUIDWithError:(*id)arg0 ;
-(void)awakeFromDisk;


@end


#endif