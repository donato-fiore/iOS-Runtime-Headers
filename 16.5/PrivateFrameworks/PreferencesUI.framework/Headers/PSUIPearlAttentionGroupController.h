// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIPEARLATTENTIONGROUPCONTROLLER_H
#define PSUIPEARLATTENTIONGROUPCONTROLLER_H

@class NSString, PSSpecifier, PSListController, BKDevicePearl, BKUserProtectedConfiguration;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>


@interface PSUIPearlAttentionGroupController : NSObject <PSSpecifierGroup>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *listController; // ivar: _listController
@property (retain, nonatomic) BKDevicePearl *pearlDevice; // ivar: _pearlDevice
@property (retain, nonatomic) NSString *pinCode; // ivar: _pinCode
@property (readonly) Class superclass;
@property (retain, nonatomic) BKUserProtectedConfiguration *updatedConfiguration; // ivar: _updatedConfiguration


-(BOOL)isPeriocularEnabled;
-(BOOL)useAlternateFooterTextForAttention;
-(id)attentionAware:(id)arg0 ;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)pearlUnlock:(id)arg0 ;
-(id)specifiers;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didCancelEnteringPIN;
-(void)setAttentionAware:(id)arg0 specifier:(id)arg1 ;
-(void)setPearlUnlock:(id)arg0 specifier:(id)arg1 ;
-(void)setProtectedCredentialsWithPasscode:(id)arg0 ;


@end


#endif