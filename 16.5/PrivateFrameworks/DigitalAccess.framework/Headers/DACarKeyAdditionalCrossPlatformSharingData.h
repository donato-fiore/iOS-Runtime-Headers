// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DACARKEYADDITIONALCROSSPLATFORMSHARINGDATA_H
#define DACARKEYADDITIONALCROSSPLATFORMSHARINGDATA_H

@class NSData, NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DACarKeyAdditionalCrossPlatformSharingData : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSData *bindingAttestation; // ivar: _bindingAttestation
@property (readonly, nonatomic) NSString *initiatorIdsPseudonym; // ivar: _initiatorIdsPseudonym
@property (readonly, nonatomic) NSUUID *sharingSessionUUID; // ivar: _sharingSessionUUID
@property (readonly, nonatomic) NSInteger targetDeviceType; // ivar: _targetDeviceType


+(BOOL)supportsSecureCoding;
+(id)decodeWithData:(id)arg0 error:(*id)arg1 ;
-(id)asDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithSharingSessionUUID:(id)arg0 bindingAttestation:(id)arg1 targetDeviceType:(NSInteger)arg2 initiatorIdsPseudonym:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif