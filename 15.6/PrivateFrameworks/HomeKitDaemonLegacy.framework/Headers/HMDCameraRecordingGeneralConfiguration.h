// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGGENERALCONFIGURATION_H
#define HMDCAMERARECORDINGGENERALCONFIGURATION_H

@class HAPTLVBase, NSArray, NSNumber;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDCameraRecordingGeneralConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger eventTriggerOptions; // ivar: _eventTriggerOptions
@property (readonly, copy, nonatomic) NSArray *mediaContainerConfigurations; // ivar: _mediaContainerConfigurations
@property (readonly, copy, nonatomic) NSNumber *prebufferLength; // ivar: _prebufferLength


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrebufferLength:(id)arg0 eventTriggerOptions:(NSUInteger)arg1 mediaContainerConfigurations:(id)arg2 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif