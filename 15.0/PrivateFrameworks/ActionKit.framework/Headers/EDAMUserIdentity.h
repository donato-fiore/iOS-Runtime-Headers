// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMUSERIDENTITY_H
#define EDAMUSERIDENTITY_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMUserIdentity : FATObject

@property (retain, nonatomic) NSNumber *longIdentifier; // ivar: _longIdentifier
@property (retain, nonatomic) NSString *stringIdentifier; // ivar: _stringIdentifier
@property (retain, nonatomic) NSNumber *type; // ivar: _type


+(id)structFields;
+(id)structName;


@end


#endif