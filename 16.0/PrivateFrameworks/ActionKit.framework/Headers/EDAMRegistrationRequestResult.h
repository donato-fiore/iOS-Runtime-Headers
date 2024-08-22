// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMREGISTRATIONREQUESTRESULT_H
#define EDAMREGISTRATIONREQUESTRESULT_H

@class NSString, NSNumber;


#import "FATObject.h"

@interface EDAMRegistrationRequestResult : FATObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *refreshToken; // ivar: _refreshToken
@property (retain, nonatomic) NSNumber *result; // ivar: _result
@property (retain, nonatomic) NSString *userEmail; // ivar: _userEmail


+(id)structFields;
+(id)structName;


@end


#endif