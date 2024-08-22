// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGMEDIACONTAINERPARAMETERS_H
#define HMDCAMERARECORDINGMEDIACONTAINERPARAMETERS_H

@class HAPTLVBase, NSNumber;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDCameraRecordingMediaContainerParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *fragmentLength; // ivar: _fragmentLength


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFragmentLength:(id)arg0 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif