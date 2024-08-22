// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPOWNERSESSIONSTATE_H
#define SPOWNERSESSIONSTATE_H

@class NSSet, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPOwnerSessionState : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSSet *disabledReasons; // ivar: _disabledReasons
@property (retain, nonatomic) NSString *ownerDataState; // ivar: _ownerDataState
@property (retain, nonatomic) NSString *serviceState; // ivar: _serviceState


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceState:(id)arg0 disabledReasons:(id)arg1 ownerDataState:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif