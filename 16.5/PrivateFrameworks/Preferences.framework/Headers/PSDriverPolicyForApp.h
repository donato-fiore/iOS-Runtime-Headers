// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSDRIVERPOLICYFORAPP_H
#define PSDRIVERPOLICYFORAPP_H

@class NSString;
@protocol DriverManagerObserver, PSDriverPolicyForAppDelegate;

#import <Foundation/Foundation.h>


@interface PSDriverPolicyForApp : NSObject <DriverManagerObserver>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (weak, nonatomic) NSObject<PSDriverPolicyForAppDelegate> *delegate; // ivar: _delegate


-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)specifiers;
-(id)valueForSpecifier:(id)arg0 ;
-(void)approvalStateDidChange:(BOOL)arg0 ;
-(void)dealloc;
-(void)setValue:(id)arg0 forSpecifier:(id)arg1 ;


@end


#endif