// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COHOMEKITSETTINGUPDATEREQUEST_H
#define COHOMEKITSETTINGUPDATEREQUEST_H

@protocol NSObject><NSCopying><NSSecureCoding;


#import "COMeshRequest.h"
#import "CODistantAccessorySetting.h"

@interface COHomeKitSettingUpdateRequest : COMeshRequest

@property (readonly, copy, nonatomic) CODistantAccessorySetting *setting; // ivar: _setting
@property (readonly, nonatomic) NSObject<NSObject><NSCopying><NSSecureCoding> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)initWithAccessorySetting:(id)arg0 value:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif