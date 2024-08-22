// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIFACECROP_H
#define HMIFACECROP_H

@class HMFObject, NSUUID, NSData, NSDate;
@protocol NSCopying, NSSecureCoding;



@interface HMIFaceCrop : HMFObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSData *dataRepresentation; // ivar: _dataRepresentation
@property (readonly, copy) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly) CGRect faceBoundingBox; // ivar: _faceBoundingBox


+(BOOL)supportsSecureCoding;
+(id)faceCropFromPhotosFaceCropImageData:(id)arg0 ;
+(id)selectBestObservation:(id)arg0 faceBoundingBoxFromPhotos:(struct CGRect )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 dataRepresentation:(id)arg1 dateCreated:(id)arg2 faceBoundingBox:(struct CGRect )arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif