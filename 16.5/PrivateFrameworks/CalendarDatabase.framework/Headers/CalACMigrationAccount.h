// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALACMIGRATIONACCOUNT_H
#define CALACMIGRATIONACCOUNT_H

@class ACAccount, NSString;
@protocol CalMigrationAccount;

#import <Foundation/Foundation.h>


@interface CalACMigrationAccount : NSObject <CalMigrationAccount>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSString *accountDescription;
@property (nonatomic) BOOL authenticated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dirty;
@property (nonatomic) BOOL enabledForCalendarsDataClass;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL provisionedForCalendarsDataClass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) BOOL visible;


-(id)accountPropertyForKey:(id)arg0 ;
-(id)identifier;
-(id)initWithACAccount:(id)arg0 ;
-(id)parentAccountIdentifier;
-(void)setAuthenticationTypeNone;
-(void)setAuthenticationTypeParent;
-(void)setPassword:(id)arg0 ;


@end


#endif