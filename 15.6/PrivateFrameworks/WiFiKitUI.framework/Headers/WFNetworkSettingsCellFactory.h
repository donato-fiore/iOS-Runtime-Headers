// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFNETWORKSETTINGSCELLFACTORY_H
#define WFNETWORKSETTINGSCELLFACTORY_H

@class UITableView;

#import <Foundation/Foundation.h>


@interface WFNetworkSettingsCellFactory : NSObject

@property (retain) UITableView *tableView; // ivar: _tableView


-(id)autoJoinCellAtIndexPath:(id)arg0 ;
-(id)autoLoginCellAtIndexPath:(id)arg0 ;
-(id)dhcpClientIDCellAtIndexPath:(id)arg0 ;
-(id)dhcpClientIDTextCellAtIndexPath:(id)arg0 ;
-(id)dnsConfigureCellAtIndexPath:(id)arg0 ;
-(id)dnsSearchDomainsCellAtIndexPath:(id)arg0 ;
-(id)dnsServerAddressesCellAtIndexPath:(id)arg0 ;
-(id)forgetCellAtIndexPath:(id)arg0 ;
-(id)httpProxyConfigCellAtIndexPath:(id)arg0 ;
-(id)httpProxyPasswordTextCellAtIndexPath:(id)arg0 ;
-(id)httpProxyPortTextCellAtIndexPath:(id)arg0 ;
-(id)httpProxyServerTextCellAtIndexPath:(id)arg0 ;
-(id)httpProxyURLTextCellAtIndexPath:(id)arg0 ;
-(id)httpProxyUserTextCellAtIndexPath:(id)arg0 ;
-(id)initWithTableView:(id)arg0 ;
-(id)ipv4AddressCellAtIndexPath:(id)arg0 ;
-(id)ipv4AddressConfigCellAtIndexPath:(id)arg0 ;
-(id)ipv4AddressTextCellAtIndexPath:(id)arg0 ;
-(id)ipv4RouterCellAtIndexPath:(id)arg0 ;
-(id)ipv4RouterTextCellAtIndexPath:(id)arg0 ;
-(id)ipv4SubnetMaskCellAtIndexPath:(id)arg0 ;
-(id)ipv4SubnetMaskTextCellAtIndexPath:(id)arg0 ;
-(id)ipv6AddressCellAtIndexPath:(id)arg0 ;
-(id)ipv6AddressConfigCellAtIndexPath:(id)arg0 ;
-(id)ipv6RouterCellAtIndexPath:(id)arg0 ;
-(id)joinCellAtIndexPath:(id)arg0 ;
-(id)manageCellAtIndexPath:(id)arg0 ;
-(id)networkQualityCellAtIndexPath:(id)arg0 ;
-(id)outrankedCellAtIndexPath:(id)arg0 chinaDevice:(BOOL)arg1 ;
-(id)priorityCellAtIndexPath:(id)arg0 ;
-(id)privacyProxyEnabledCellAtIndexPath:(id)arg0 ;
-(id)randomMACCellAtIndexPath:(id)arg0 shouldShowSwitch:(BOOL)arg1 chinaDevice:(BOOL)arg2 ;
-(id)recommendationCellAtIndexPath:(id)arg0 ;
-(id)renewLeaseCellAtIndexPath:(id)arg0 ;
-(id)saveDataModeCellAtIndexPath:(id)arg0 ;
-(id)segmentedCellAtIndexPath:(id)arg0 ;
-(void)_registerCells;


@end


#endif