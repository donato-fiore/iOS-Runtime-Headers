// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKLOCKREQUEST_H
#define CRKLOCKREQUEST_H

@class CATTaskRequest, NSString;



@interface CRKLockRequest : CATTaskRequest

@property (copy, nonatomic) NSString *lockedByLabel; // ivar: _lockedByLabel
@property (copy, nonatomic) NSString *passcode; // ivar: _passcode


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif