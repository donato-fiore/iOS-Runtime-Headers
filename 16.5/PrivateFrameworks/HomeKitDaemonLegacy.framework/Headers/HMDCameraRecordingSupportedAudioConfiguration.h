// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGSUPPORTEDAUDIOCONFIGURATION_H
#define HMDCAMERARECORDINGSUPPORTEDAUDIOCONFIGURATION_H

@class HAPTLVBase, NSArray, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDCameraRecordingSupportedAudioConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *codecConfigurations; // ivar: _codecConfigurations
@property (readonly, copy) NSData *tlvData;


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCodecConfigurations:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif