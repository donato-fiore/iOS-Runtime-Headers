// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBACCOUNTCHANGE_H
#define MBACCOUNTCHANGE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MBAccountChange : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSInteger changeType; // ivar: _changeType
@property (readonly, nonatomic) BOOL isPrimaryAccount; // ivar: _isPrimaryAccount
@property (readonly, nonatomic) NSString *personaIdentifier; // ivar: _personaIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAccountIdentifier:(id)arg0 personaIdentifier:(id)arg1 isPrimaryAccount:(BOOL)arg2 changeType:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif