// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHACTIVATIONLOCKBYPASSCODERESULTOBJECT_H
#define DMFFETCHACTIVATIONLOCKBYPASSCODERESULTOBJECT_H

@class CATTaskResultObject, NSString;



@interface DMFFetchActivationLockBypassCodeResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSString *bypassCode; // ivar: _bypassCode


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithBypassCode:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif