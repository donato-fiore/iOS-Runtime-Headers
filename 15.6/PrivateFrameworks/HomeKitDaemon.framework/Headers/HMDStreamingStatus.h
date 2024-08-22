// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSTREAMINGSTATUS_H
#define HMDSTREAMINGSTATUS_H

@class HAPTLVBase;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDStreamingStatus : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger streamingStatus; // ivar: _streamingStatus


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif