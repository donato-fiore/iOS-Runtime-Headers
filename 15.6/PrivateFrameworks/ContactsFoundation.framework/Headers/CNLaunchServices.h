// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNLAUNCHSERVICES_H
#define CNLAUNCHSERVICES_H

@protocol CNLaunchServicesAdapter, OS_os_log;

#import <Foundation/Foundation.h>


@interface CNLaunchServices : NSObject

@property (retain, nonatomic) NSObject<CNLaunchServicesAdapter> *adapter; // ivar: _adapter
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log


-(id)applicationForBundleIdentifier:(id)arg0 ;
-(id)applicationsAvailableForHandlingURLScheme:(id)arg0 ;
-(id)applicationsForUserActivityType:(id)arg0 ;
-(id)init;
-(id)initWithAdapter:(id)arg0 ;
-(void)openSensitiveURLInBackground:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;
-(void)openUserActivityData:(id)arg0 inApplication:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif