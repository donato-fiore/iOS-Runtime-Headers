// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUINETWORKCONTROLLER_H
#define PUINETWORKCONTROLLER_H

@class PSListController, NSMutableArray, NEConfiguration;



@interface PUINetworkController : PSListController

@property (retain) NSMutableArray *dnsConfigurations; // ivar: _dnsConfigurations
@property (retain) NEConfiguration *pathControllerConfiguration; // ivar: _pathControllerConfiguration


-(id)eligibleApplications;
-(id)init;
-(id)isLocalNetworkEnabled:(id)arg0 ;
-(id)networkConfigurationEnabled:(id)arg0 ;
-(id)pathRuleForBundleID:(id)arg0 create:(BOOL)arg1 ;
-(id)specifiers;
-(void)dnsConfigurationChanged:(id)arg0 ;
-(void)loadConfigurationsForceRefresh:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)saveConfiguration;
-(void)setLocalNetworkEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif