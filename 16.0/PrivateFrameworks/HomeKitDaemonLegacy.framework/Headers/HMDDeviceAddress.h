// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDEVICEADDRESS_H
#define HMDDEVICEADDRESS_H

@class NSString, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HMDDeviceAddress : NSObject <NSCopying>



@property (readonly, getter=isCurrentDevice) BOOL currentDevice;
@property (readonly, nonatomic) NSString *idsDestination; // ivar: _idsDestination
@property (readonly, nonatomic) NSUUID *idsIdentifier; // ivar: _idsIdentifier


+(id)addressWithIDSIdentifier:(id)arg0 idsDestination:(id)arg1 ;
+(id)localDeviceIDSIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIDSIdentifier:(id)arg0 idsDestination:(id)arg1 ;


@end


#endif