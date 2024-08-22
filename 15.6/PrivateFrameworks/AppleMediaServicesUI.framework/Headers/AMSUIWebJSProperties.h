// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUIWEBJSPROPERTIES_H
#define AMSUIWEBJSPROPERTIES_H

@class NSDictionary;
@protocol AMSUIWebJSPropertiesDelegate;

#import <Foundation/Foundation.h>

#import "AMSUIWebClientContext.h"

@interface AMSUIWebJSProperties : NSObject

@property (weak, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (weak, nonatomic) NSObject<AMSUIWebJSPropertiesDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDictionary *lastAccountsExport; // ivar: _lastAccountsExport


-(id)_accountsProperties;
-(id)_clientOptionsProperties;
-(id)_deviceProperties;
-(id)_hexStringFromColor:(id)arg0 ;
-(id)_pluginProperties;
-(id)_processProperties;
-(id)_propertiesForClientInfo:(id)arg0 ;
-(id)generateProperties;
-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg0 ;
-(void)_lastConnectionReportDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif