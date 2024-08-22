// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMAUTHENTICATIONREQUESTRESULT_H
#define EDAMAUTHENTICATIONREQUESTRESULT_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMAuthenticationRequestResult : FATObject

@property (retain, nonatomic) NSNumber *result; // ivar: _result
@property (retain, nonatomic) NSString *userEmail; // ivar: _userEmail
@property (retain, nonatomic) NSNumber *userId; // ivar: _userId


+(id)structFields;
+(id)structName;


@end


#endif