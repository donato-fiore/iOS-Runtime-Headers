// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSENTRY_H
#define PDSENTRY_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PDSRegistration.h"
#import "PDSUser.h"

@interface PDSEntry : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, nonatomic) PDSRegistration *registration; // ivar: _registration
@property (readonly, nonatomic) unsigned char state; // ivar: _state
@property (readonly, nonatomic) PDSUser *user; // ivar: _user


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEntry:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entryWithUpdatedState:(unsigned char)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 registration:(id)arg1 clientID:(id)arg2 ;
-(id)initWithUser:(id)arg0 registration:(id)arg1 clientID:(id)arg2 state:(unsigned char)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif