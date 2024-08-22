// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFENABLELOSTMODEREQUEST_H
#define DMFENABLELOSTMODEREQUEST_H

@class NSString;


#import "DMFTaskRequest.h"

@interface DMFEnableLostModeRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *footnote; // ivar: _footnote
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif