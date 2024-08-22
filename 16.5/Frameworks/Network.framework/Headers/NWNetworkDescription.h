// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWNETWORKDESCRIPTION_H
#define NWNETWORKDESCRIPTION_H

@class NSSet, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface NWNetworkDescription : NSObject

@property (copy) NSSet *dnsSearchDomainOptions; // ivar: _dnsSearchDomainOptions
@property (copy) NSSet *dnsServerAddressOptions; // ivar: _dnsServerAddressOptions
@property (copy) NSSet *interfaceTypeOptions; // ivar: _interfaceTypeOptions
@property (readonly, nonatomic) NSString *privateDescription;
@property (copy) NSURL *probeURL; // ivar: _probeURL
@property NSInteger roamingPreference; // ivar: _roamingPreference
@property (copy) NSSet *ssidOptions; // ivar: _ssidOptions
@property NSInteger state; // ivar: _state


+(NSInteger)getNewStateFromPathMatch:(BOOL)arg0 oldState:(NSInteger)arg1 probeExists:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesPath:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 showFullContent:(BOOL)arg1 ;
-(void)updateStateWithPath:(id)arg0 ;


@end


#endif