// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACEINSTANCEDESCRIPTOR_H
#define NTKFACEINSTANCEDESCRIPTOR_H

@class NSData, NSUUID, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NTKFaceInstanceDescriptor : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSData *faceJSONRepresentation; // ivar: _faceJSONRepresentation
@property (readonly, nonatomic) NSUUID *nrDeviceUUID; // ivar: _nrDeviceUUID
@property (readonly, nonatomic) NSString *resourceDirectory; // ivar: _resourceDirectory


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONRepresentation:(id)arg0 nrDeviceUUID:(id)arg1 resourceDirectory:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif