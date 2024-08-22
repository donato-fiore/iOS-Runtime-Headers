// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERARECORDINGSUPPORTEDVIDEOCONFIGURATION_H
#define HMDCAMERARECORDINGSUPPORTEDVIDEOCONFIGURATION_H

@class HAPTLVBase, NSArray;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDCameraRecordingSupportedVideoConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *codecConfigurations; // ivar: _codecConfigurations


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCodecConfigurations:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif