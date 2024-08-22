// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDH264PROFILE_H
#define HMDH264PROFILE_H

@class HAPNumberParser;
@protocol NSSecureCoding;



@interface HMDH264Profile : HAPNumberParser <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger h264Profile; // ivar: _h264Profile


+(BOOL)supportsSecureCoding;
+(id)arrayWithProfiles:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithH264Profile:(NSUInteger)arg0 ;
-(id)initWithTLVData:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif