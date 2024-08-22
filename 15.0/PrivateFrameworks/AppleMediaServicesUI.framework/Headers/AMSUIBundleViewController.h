// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIBUNDLEVIEWCONTROLLER_H
#define AMSUIBUNDLEVIEWCONTROLLER_H

@class ACAccount, NSString;
@protocol AMSBagConsumer;


#import "AMSUIDynamicViewController.h"

@interface AMSUIBundleViewController : AMSUIDynamicViewController <AMSBagConsumer>

 {
    ACAccount *account;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *placement; // ivar: _placement
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
-(id)account;
-(id)initWithServiceType:(id)arg0 placement:(id)arg1 account:(id)arg2 bag:(id)arg3 ;
-(void)setAccount:(id)arg0 ;


@end


#endif