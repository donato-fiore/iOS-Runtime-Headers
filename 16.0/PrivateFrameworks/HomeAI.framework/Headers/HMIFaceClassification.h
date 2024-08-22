// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIFACECLASSIFICATION_H
#define HMIFACECLASSIFICATION_H

@class HMFObject, NSUUID, NSString;
@protocol NSSecureCoding;


#import "HMIFaceCrop.h"
#import "HMIFaceprint.h"

@interface HMIFaceClassification : HMFObject <NSSecureCoding>



@property (readonly) NSUUID *UUID;
@property (readonly) CGFloat confidence; // ivar: _confidence
@property (readonly) CGRect faceBoundingBox; // ivar: _faceBoundingBox
@property (readonly) HMIFaceCrop *faceCrop; // ivar: _faceCrop
@property (readonly) HMIFaceprint *faceprint; // ivar: _faceprint
@property (readonly) NSInteger familiarity; // ivar: _familiarity
@property (readonly) BOOL fromTorsoClassification; // ivar: _fromTorsoClassification
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSUUID *personUUID; // ivar: _personUUID
@property (readonly) NSString *personsModelIdentifier; // ivar: _personsModelIdentifier
@property (readonly) NSUUID *sessionEntityUUID; // ivar: _sessionEntityUUID
@property (readonly) NSUUID *sourceUUID; // ivar: _sourceUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersonUUID:(id)arg0 sourceUUID:(id)arg1 confidence:(CGFloat)arg2 fromTorsoClassification:(BOOL)arg3 familiarity:(NSInteger)arg4 ;
-(id)initWithPersonUUID:(id)arg0 sourceUUID:(id)arg1 sessionEntityUUID:(id)arg2 confidence:(CGFloat)arg3 familiarity:(NSInteger)arg4 ;
-(id)initWithUUID:(id)arg0 name:(id)arg1 personsModelIdentifier:(id)arg2 faceBoundingBox:(struct CGRect )arg3 ;
-(id)initWithUUID:(id)arg0 sourceUUID:(id)arg1 faceBoundingBox:(struct CGRect )arg2 ;
-(id)initWithUUID:(id)arg0 sourceUUID:(id)arg1 sessionEntityUUID:(id)arg2 faceBoundingBox:(struct CGRect )arg3 facecrop:(id)arg4 faceprint:(id)arg5 confidence:(CGFloat)arg6 ;
-(id)initWithUUID:(id)arg0 sourceUUID:(id)arg1 sessionEntityUUID:(id)arg2 faceCrop:(id)arg3 faceprint:(id)arg4 confidence:(CGFloat)arg5 familiarity:(NSInteger)arg6 ;
-(id)initWithUUID:(id)arg0 sourceUUID:(id)arg1 sessionEntityUUID:(id)arg2 faceCrop:(id)arg3 faceprint:(id)arg4 confidence:(CGFloat)arg5 fromTorsoClassification:(BOOL)arg6 familiarity:(NSInteger)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif