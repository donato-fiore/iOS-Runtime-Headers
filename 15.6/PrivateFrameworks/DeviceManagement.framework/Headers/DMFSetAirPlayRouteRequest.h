// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFSETAIRPLAYROUTEREQUEST_H
#define DMFSETAIRPLAYROUTEREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFSetAirPlayRouteRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *password; // ivar: _password
@property (copy, nonatomic) NSString *routeUID; // ivar: _routeUID
@property (nonatomic) BOOL suppressPasscodePrompt; // ivar: _suppressPasscodePrompt


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif