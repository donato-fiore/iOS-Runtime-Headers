// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMIDENTITYFORADMIN_H
#define EDAMIDENTITYFORADMIN_H

@class NSNumber;


#import "FATObject.h"
#import "EDAMIdentity.h"

@interface EDAMIdentityForAdmin : FATObject

@property (retain, nonatomic) EDAMIdentity *identity; // ivar: _identity
@property (retain, nonatomic) NSNumber *state; // ivar: _state
@property (retain, nonatomic) NSNumber *stateChanged; // ivar: _stateChanged


+(id)structFields;
+(id)structName;


@end


#endif