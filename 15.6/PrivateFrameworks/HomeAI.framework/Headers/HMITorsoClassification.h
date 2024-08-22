// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMITORSOCLASSIFICATION_H
#define HMITORSOCLASSIFICATION_H

@class HMFObject, NSUUID;
@protocol NSSecureCoding;



@interface HMITorsoClassification : HMFObject <NSSecureCoding>



@property (readonly) CGFloat confidence; // ivar: _confidence
@property (readonly) NSUUID *personUUID; // ivar: _personUUID
@property (readonly) NSUUID *sourceUUID; // ivar: _sourceUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersonUUID:(id)arg0 sourceUUID:(id)arg1 confidence:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif