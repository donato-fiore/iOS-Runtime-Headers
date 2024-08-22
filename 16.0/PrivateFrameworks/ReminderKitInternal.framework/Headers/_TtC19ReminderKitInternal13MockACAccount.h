// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19REMINDERKITINTERNAL13MOCKACACCOUNT_H
#define _TTC19REMINDERKITINTERNAL13MOCKACACCOUNT_H

@class ACAccount, NSString, NSArray, NSMutableSet;



@interface _TtC19ReminderKitInternal13MockACAccount : ACAccount {
    ? rem_aa_primaryEmailMock;
    ? rem_aa_altDSIDMock;
    ? rem_mockChildren;
    ? rem_enabledDataClasses;
}


@property (nonatomic, readonly) NSString *aa_altDSID;
@property (nonatomic, readonly) NSString *aa_primaryEmail;
@property (nonatomic, readonly) NSArray *childAccounts;
@property (nonatomic, retain) NSMutableSet *enabledDataclasses;


-(BOOL)isEnabledForDataclass:(id)arg0 ;
-(id)childAccountsWithAccountTypeIdentifier:(id)arg0 ;
-(id)initWithAccountType:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithManagedAccount:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 forDataclass:(id)arg1 ;


@end


#endif