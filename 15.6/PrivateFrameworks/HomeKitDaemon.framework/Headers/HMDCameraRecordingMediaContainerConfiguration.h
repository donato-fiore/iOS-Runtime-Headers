// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGMEDIACONTAINERCONFIGURATION_H
#define HMDCAMERARECORDINGMEDIACONTAINERCONFIGURATION_H

@class HAPTLVBase;
@protocol HAPTLVCreateParse, NSSecureCoding;


#import "HMDCameraRecordingMediaContainer.h"
#import "HMDCameraRecordingMediaContainerParameters.h"

@interface HMDCameraRecordingMediaContainerConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) HMDCameraRecordingMediaContainer *container; // ivar: _container
@property (readonly, copy, nonatomic) HMDCameraRecordingMediaContainerParameters *parameters; // ivar: _parameters


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaContainer:(id)arg0 containerParameters:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif