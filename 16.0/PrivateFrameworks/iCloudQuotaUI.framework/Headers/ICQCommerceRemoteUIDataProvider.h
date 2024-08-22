// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQCOMMERCEREMOTEUIDATAPROVIDER_H
#define ICQCOMMERCEREMOTEUIDATAPROVIDER_H

@class ISPropertyListProvider;


#import "ICQCommerceRemoteUIDelegate.h"

@interface ICQCommerceRemoteUIDataProvider : ISPropertyListProvider

@property (weak, nonatomic) ICQCommerceRemoteUIDelegate *parent; // ivar: _parent
@property (nonatomic, getter=isPlist) BOOL plist; // ivar: _plist


-(BOOL)parseData:(id)arg0 returningError:(*id)arg1 ;
-(void)_setFailureType:(id)arg0 ;


@end


#endif