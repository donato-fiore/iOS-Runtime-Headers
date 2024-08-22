// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCMODELGENERICAVITEMUSERIDENTITYPROPERTYSET_H
#define MPCMODELGENERICAVITEMUSERIDENTITYPROPERTYSET_H

@class ICUserIdentityProperties;

#import <Foundation/Foundation.h>


@interface MPCModelGenericAVItemUserIdentityPropertySet : NSObject

@property (copy, nonatomic) ICUserIdentityProperties *delegatedIdentityProperties; // ivar: _delegatedIdentityProperties
@property (copy, nonatomic) ICUserIdentityProperties *identityProperties; // ivar: _identityProperties


+(void)identityPropertySetFromRequestContext:(id)arg0 completion:(id)arg1 ;
-(id)initWithIdentityProperties:(id)arg0 delegatedIdentityProperties:(id)arg1 ;


@end


#endif