// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETEIDSFIREWALL_H
#define CRKCONCRETEIDSFIREWALL_H

@class NSString, IDSFirewall;
@protocol CRKIDSFirewall;

#import <Foundation/Foundation.h>


@interface CRKConcreteIDSFirewall : NSObject <CRKIDSFirewall>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) IDSFirewall *underlyingFirewall; // ivar: _underlyingFirewall


+(id)appleIDFromFirewallEntry:(id)arg0 ;
+(id)firewallEntryForAppleID:(id)arg0 ;
-(id)initWithUnderlyingFirewall:(id)arg0 ;
-(void)addAllowedAppleIDs:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllowedAppleIDsWithCompletion:(id)arg0 ;
-(void)removeAllowedAppleIDs:(id)arg0 completion:(id)arg1 ;


@end


#endif