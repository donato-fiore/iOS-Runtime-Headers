// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDTINKERPROFILE_H
#define HDTINKERPROFILE_H



#import "HDProfile.h"
#import "HDAttachmentManager.h"

@interface HDTinkerProfile : HDProfile {
    HDAttachmentManager *_attachmentManager;
}




-(BOOL)setDSID:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPairedNRDeviceUUID:(id)arg0 error:(*id)arg1 ;
-(id)attachmentManager;
-(id)dsidWithError:(*id)arg0 ;
-(id)initWithDirectoryPath:(id)arg0 medicalIDDirectoryPath:(id)arg1 daemon:(id)arg2 profileIdentifier:(id)arg3 ;
-(id)pairedNRDeviceUUIDWithError:(*id)arg0 ;
-(void)awakeFromDisk;


@end


#endif