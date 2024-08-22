// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIMARKETINGITEMVIEWCONTROLLER_H
#define AMSUIMARKETINGITEMVIEWCONTROLLER_H

@class NSDictionary, NSString;
@protocol AMSBagConsumer;


#import "AMSUIDynamicViewController.h"

@interface AMSUIMarketingItemViewController : AMSUIDynamicViewController <AMSBagConsumer>



@property (copy, nonatomic) NSDictionary *contextInfo; // ivar: _contextInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *offerHints;
@property (retain, nonatomic) NSString *placement; // ivar: _placement
@property (retain, nonatomic) NSString *seed;
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(id)initWithMarketingItem:(id)arg0 bag:(id)arg1 ;
-(id)initWithServiceType:(id)arg0 placement:(id)arg1 account:(id)arg2 bag:(id)arg3 ;
-(id)initWithServiceType:(id)arg0 placement:(id)arg1 bag:(id)arg2 ;
-(void)_setInternalClientOptionsValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif