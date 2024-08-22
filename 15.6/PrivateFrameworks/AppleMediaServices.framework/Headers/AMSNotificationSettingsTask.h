// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSNOTIFICATIONSETTINGSTASK_H
#define AMSNOTIFICATIONSETTINGSTASK_H

@class ACAccount, NSString;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"
#import "AMSProcessInfo.h"

@interface AMSNotificationSettingsTask : AMSTask <AMSBagConsumer>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(id)_generateParametersForItems:(id)arg0 ;
-(id)fetchAllSettings;
-(id)fetchSettingForIdentifier:(id)arg0 ;
-(id)fetchSettingsForSections:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 account:(id)arg1 bag:(id)arg2 ;
-(id)updateSettings:(id)arg0 ;


@end


#endif