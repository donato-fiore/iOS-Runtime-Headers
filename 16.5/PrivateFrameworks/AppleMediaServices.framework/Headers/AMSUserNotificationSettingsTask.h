// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUSERNOTIFICATIONSETTINGSTASK_H
#define AMSUSERNOTIFICATIONSETTINGSTASK_H

@class ACAccount, NSString;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"
#import "AMSProcessInfo.h"

@interface AMSUserNotificationSettingsTask : AMSTask <AMSBagConsumer>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(id)_countryCodeFromBag:(id)arg0 ;
-(id)_generateParametersForItems:(id)arg0 ;
-(id)_stringForKey:(id)arg0 fromBag:(id)arg1 ;
-(id)_url;
-(id)fetchAllSettings;
-(id)initWithIdentifier:(id)arg0 clientIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 ;
-(id)updateSettings:(id)arg0 ;


@end


#endif