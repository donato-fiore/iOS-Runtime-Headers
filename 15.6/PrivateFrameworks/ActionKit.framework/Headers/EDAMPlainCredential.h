// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMPLAINCREDENTIAL_H
#define EDAMPLAINCREDENTIAL_H

@class NSString, NSNumber;


#import "FATObject.h"

@interface EDAMPlainCredential : FATObject

@property (retain, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSNumber *userId; // ivar: _userId


+(id)structFields;
+(id)structName;


@end


#endif