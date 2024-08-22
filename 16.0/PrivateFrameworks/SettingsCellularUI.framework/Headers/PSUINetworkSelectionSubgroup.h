// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUINETWORKSELECTIONSUBGROUP_H
#define PSUINETWORKSELECTIONSUBGROUP_H

@class NSMutableArray, CoreTelephonyClient, NSString, PSListController, PSSpecifier;
@protocol CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientRegistrationDelegate, PSSpecifierGroup;

#import <Foundation/Foundation.h>


@interface PSUINetworkSelectionSubgroup : NSObject <CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientRegistrationDelegate, PSSpecifierGroup>



@property (retain, nonatomic) NSMutableArray *bundleControllers; // ivar: _bundleControllers
@property (retain, nonatomic) CoreTelephonyClient *ctClient; // ivar: _ctClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *listController; // ivar: _listController
@property (weak, nonatomic) PSSpecifier *parentSpecifier; // ivar: _parentSpecifier
@property (readonly) Class superclass;


-(id)getLogger;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 parentSpecifier:(id)arg2 ;
-(id)localizedCellularNetworkName:(id)arg0 ;
-(id)specifiers;
-(void)networkSelected:(id)arg0 success:(BOOL)arg1 mode:(id)arg2 ;
-(void)operatorNameChanged:(id)arg0 name:(id)arg1 ;
-(void)reloadCellularNetworkSpecifier;
-(void)willEnterForeground;


@end


#endif