// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFACEPRINT_H
#define HMFACEPRINT_H

@class NSUUID, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMFaceprint : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSData *data; // ivar: _data
@property (readonly, copy) NSUUID *faceCropUUID; // ivar: _faceCropUUID
@property (readonly, copy) NSUUID *modelUUID; // ivar: _modelUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 data:(id)arg1 modelUUID:(id)arg2 faceCropUUID:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif