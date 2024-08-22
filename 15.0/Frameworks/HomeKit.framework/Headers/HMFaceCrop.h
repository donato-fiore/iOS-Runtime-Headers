// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMFACECROP_H
#define HMFACECROP_H

@class NSUUID, NSData, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMFaceCrop : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSData *dataRepresentation; // ivar: _dataRepresentation
@property (readonly, copy) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly) CGRect faceBoundingBox; // ivar: _faceBoundingBox


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 dataRepresentation:(id)arg1 dateCreated:(id)arg2 faceBoundingBox:(struct CGRect )arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif