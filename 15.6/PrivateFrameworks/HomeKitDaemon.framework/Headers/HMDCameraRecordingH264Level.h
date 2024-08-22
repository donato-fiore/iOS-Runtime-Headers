// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGH264LEVEL_H
#define HMDCAMERARECORDINGH264LEVEL_H

@class HAPNumberParser;
@protocol NSSecureCoding;



@interface HMDCameraRecordingH264Level : HAPNumberParser <NSSecureCoding>



@property (readonly, nonatomic) NSInteger h264Level; // ivar: _h264Level


+(BOOL)supportsSecureCoding;
+(id)arrayWithLevels:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithH264Level:(NSInteger)arg0 ;
-(id)initWithTLVData:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif