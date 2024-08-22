// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKWAITFORUNLOCKREQUEST_H
#define CRKWAITFORUNLOCKREQUEST_H

@class CATTaskRequest;



@interface CRKWaitForUnlockRequest : CATTaskRequest

@property (nonatomic) BOOL shouldBecomeExclusive; // ivar: _shouldBecomeExclusive


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif