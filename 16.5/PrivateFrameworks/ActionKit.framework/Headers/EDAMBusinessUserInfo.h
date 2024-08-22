// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMBUSINESSUSERINFO_H
#define EDAMBUSINESSUSERINFO_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMBusinessUserInfo : FATObject

@property (retain, nonatomic) NSNumber *businessId; // ivar: _businessId
@property (retain, nonatomic) NSString *businessName; // ivar: _businessName
@property (retain, nonatomic) NSString *email; // ivar: _email
@property (retain, nonatomic) NSNumber *role; // ivar: _role
@property (retain, nonatomic) NSNumber *updated; // ivar: _updated


+(id)structFields;
+(id)structName;


@end


#endif