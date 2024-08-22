// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFNETWORKCONFIGURATIONALLOWEDHOSTGROUP_H
#define HFNETWORKCONFIGURATIONALLOWEDHOSTGROUP_H

@class NSSet, NSMutableSet, NSString;

#import <Foundation/Foundation.h>


@interface HFNetworkConfigurationAllowedHostGroup : NSObject

@property (readonly, copy, nonatomic) NSSet *addresses;
@property (readonly, copy, nonatomic) NSSet *allowedHosts;
@property (retain, nonatomic) NSMutableSet *mutableAddresses; // ivar: _mutableAddresses
@property (retain, nonatomic) NSMutableSet *mutableAllowedHosts; // ivar: _mutableAllowedHosts
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger purpose; // ivar: _purpose
@property (readonly, copy, nonatomic) NSString *purposeLocalizedDescription;


+(id)groupsForNetworkConfigurationProfiles:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)addAllowedHost:(id)arg0 ;


@end


#endif