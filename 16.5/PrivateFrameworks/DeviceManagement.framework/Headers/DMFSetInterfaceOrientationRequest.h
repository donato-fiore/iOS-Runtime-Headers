// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFSETINTERFACEORIENTATIONREQUEST_H
#define DMFSETINTERFACEORIENTATIONREQUEST_H



#import "DMFTaskRequest.h"

@interface DMFSetInterfaceOrientationRequest : DMFTaskRequest

@property (nonatomic) NSUInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (nonatomic) BOOL lockOrientation; // ivar: _lockOrientation


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif