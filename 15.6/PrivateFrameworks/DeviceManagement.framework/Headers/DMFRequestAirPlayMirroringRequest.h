// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFREQUESTAIRPLAYMIRRORINGREQUEST_H
#define DMFREQUESTAIRPLAYMIRRORINGREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFRequestAirPlayMirroringRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *destinationDeviceID; // ivar: _destinationDeviceID
@property (copy, nonatomic) NSString *destinationName; // ivar: _destinationName
@property (nonatomic) BOOL force; // ivar: _force
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) CGFloat scanWaitInterval; // ivar: _scanWaitInterval


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif