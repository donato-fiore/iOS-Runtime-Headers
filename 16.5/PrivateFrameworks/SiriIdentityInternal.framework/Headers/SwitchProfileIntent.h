// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWITCHPROFILEINTENT_H
#define SWITCHPROFILEINTENT_H

@class INIntent, NSString;


#import "Account.h"

@interface SwitchProfileIntent : INIntent

@property (nonatomic, retain) Account *account;
@property (nonatomic, copy) NSString *homeUserId;
@property (nonatomic, copy) NSString *iCloudAltDSID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) NSInteger switchType;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 verb:(id)arg1 parametersByName:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 backingStore:(id)arg1 ;


@end


#endif