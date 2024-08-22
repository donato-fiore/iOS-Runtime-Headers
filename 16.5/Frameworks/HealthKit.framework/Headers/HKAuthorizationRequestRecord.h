// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKAUTHORIZATIONREQUESTRECORD_H
#define HKAUTHORIZATIONREQUESTRECORD_H

@class NSUUID, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKSource.h"

@interface HKAuthorizationRequestRecord : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, copy, nonatomic) HKSource *source; // ivar: _source
@property (readonly, copy, nonatomic) NSSet *typesRequiringReadAuthorization; // ivar: _typesRequiringReadAuthorization
@property (readonly, copy, nonatomic) NSSet *typesRequiringShareAuthorization; // ivar: _typesRequiringShareAuthorization


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(id)arg0 session:(id)arg1 readTypes:(id)arg2 writeTypes:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif