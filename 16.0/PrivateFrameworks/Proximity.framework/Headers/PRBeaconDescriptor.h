// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRBEACONDESCRIPTOR_H
#define PRBEACONDESCRIPTOR_H

@class NSUUID, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRBeaconDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property NSUInteger macAddress; // ivar: _macAddress
@property (readonly) NSNumber *major; // ivar: _major
@property (readonly) NSNumber *minor; // ivar: _minor


+(BOOL)supportsSecureCoding;
-(id)_initWithUUID:(id)arg0 major:(id)arg1 minor:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)initWithUUID:(id)arg0 major:(unsigned short)arg1 ;
-(id)initWithUUID:(id)arg0 major:(unsigned short)arg1 minor:(unsigned short)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif