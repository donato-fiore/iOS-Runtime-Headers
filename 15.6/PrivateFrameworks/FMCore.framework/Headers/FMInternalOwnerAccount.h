// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMINTERNALOWNERACCOUNT_H
#define FMINTERNALOWNERACCOUNT_H

@class NSString;
@protocol FMOwnerAccountIdentity;

#import <Foundation/Foundation.h>


@interface FMInternalOwnerAccount : NSObject <FMOwnerAccountIdentity>



@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (copy, nonatomic) NSString *personId; // ivar: _personId
@property (copy, nonatomic) NSString *username; // ivar: _username


-(id)description;
-(id)initWithAccount:(id)arg0 ;


@end


#endif