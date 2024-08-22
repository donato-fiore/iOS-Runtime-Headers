// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFSETPASSCODELOCKGRACEPERIODREQUEST_H
#define DMFSETPASSCODELOCKGRACEPERIODREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFSetPasscodeLockGracePeriodRequest : DMFTaskRequest

@property (nonatomic) CGFloat seconds; // ivar: _seconds


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif