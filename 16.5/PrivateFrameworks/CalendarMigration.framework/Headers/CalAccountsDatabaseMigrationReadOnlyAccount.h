// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALACCOUNTSDATABASEMIGRATIONREADONLYACCOUNT_H
#define CALACCOUNTSDATABASEMIGRATIONREADONLYACCOUNT_H

@class NSString, NSMutableDictionary;
@protocol CalMigrationReadOnlyAccount;

#import <Foundation/Foundation.h>


@interface CalAccountsDatabaseMigrationReadOnlyAccount : NSObject <CalMigrationReadOnlyAccount>

 {
    NSString *_identifier;
    NSString *_parentAccountIdentifier;
    NSString *_accountTypeIdentifier;
    NSMutableDictionary *_accountProperties;
}


@property (readonly, nonatomic) NSString *accountDescription; // ivar: _accountDescription
@property (readonly, nonatomic) BOOL authenticated; // ivar: _authenticated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enabledForCalendarsDataClass; // ivar: _enabledForCalendarsDataClass
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL provisionedForCalendarsDataClass; // ivar: _provisionedForCalendarsDataClass
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *username; // ivar: _username
@property (readonly, nonatomic) BOOL visible; // ivar: _visible


-(id)accountPropertyForKey:(id)arg0 ;
-(id)accountTypeIdentifier;
-(id)identifier;
-(id)initWithIdentifier:(id)arg0 parentIdentifier:(id)arg1 accountTypeIdentifier:(id)arg2 description:(id)arg3 enabledForCalendarDataClass:(BOOL)arg4 provisionedForCalendarDataClass:(BOOL)arg5 visible:(BOOL)arg6 authenticated:(BOOL)arg7 username:(id)arg8 properties:(id)arg9 ;
-(id)parentAccountIdentifier;


@end


#endif