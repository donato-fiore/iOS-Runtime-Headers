// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADWHITELISTEDACCOUNTACCESSHANDLER_H
#define CADWHITELISTEDACCOUNTACCESSHANDLER_H

@protocol CADAccountAccessHandler, CADACAccountsProvider;

#import <Foundation/Foundation.h>


@interface CADWhitelistedAccountAccessHandler : NSObject <CADAccountAccessHandler>



@property (readonly, nonatomic) NSObject<CADACAccountsProvider> *accountsProvider; // ivar: _accountsProvider


-(BOOL)isAccountManaged:(id)arg0 ;
-(BOOL)isActionAllowed:(NSUInteger)arg0 forAccountIdentifier:(id)arg1 ;
-(id)initWithAccountsProvider:(id)arg0 ;
-(id)restrictedCalendarRowIDsForAction:(NSUInteger)arg0 ;
-(void)reset;


@end


#endif