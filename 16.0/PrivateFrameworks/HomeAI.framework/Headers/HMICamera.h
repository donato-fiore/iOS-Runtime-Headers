// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMICAMERA_H
#define HMICAMERA_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, NSSecureCoding;



@interface HMICamera : HMFObject <HMFLogging, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSString *manufacturer; // ivar: _manufacturer
@property (readonly) NSString *model; // ivar: _model
@property (readonly) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 manufacturer:(id)arg2 model:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 manufacturer:(id)arg2 model:(id)arg3 firmwareVersion:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif