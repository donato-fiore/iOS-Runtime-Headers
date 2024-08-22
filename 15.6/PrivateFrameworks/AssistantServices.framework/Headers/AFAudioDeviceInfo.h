// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFAUDIODEVICEINFO_H
#define AFAUDIODEVICEINFO_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFAudioDeviceInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *deviceUID; // ivar: _deviceUID
@property (readonly, nonatomic) BOOL isRemoteDevice; // ivar: _isRemoteDevice
@property (readonly, copy, nonatomic) NSString *route; // ivar: _route


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRoute:(id)arg0 isRemoteDevice:(BOOL)arg1 deviceUID:(id)arg2 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif