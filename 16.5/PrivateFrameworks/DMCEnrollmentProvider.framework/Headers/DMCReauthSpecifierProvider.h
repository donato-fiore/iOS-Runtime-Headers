// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCREAUTHSPECIFIERPROVIDER_H
#define DMCREAUTHSPECIFIERPROVIDER_H

@class PSListController;


#import "DMCSpecifierProvider.h"

@interface DMCReauthSpecifierProvider : DMCSpecifierProvider

@property (readonly, weak, nonatomic) PSListController *presenter; // ivar: _presenter


-(BOOL)_shouldAutoPresentReauthFlow;
-(BOOL)handleURL:(id)arg0 ;
-(id)_reauthSpecifier;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 presenter:(id)arg1 ;
-(id)specifiers;
-(void)presentReauthFlow:(id)arg0 ;


@end


#endif