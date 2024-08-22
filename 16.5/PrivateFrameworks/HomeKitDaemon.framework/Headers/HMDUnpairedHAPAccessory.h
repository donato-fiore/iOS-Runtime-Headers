// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUNPAIREDHAPACCESSORY_H
#define HMDUNPAIREDHAPACCESSORY_H

@class NSMutableArray, NSArray, NSData;


#import "HMDUnassociatedAccessory.h"

@interface HMDUnpairedHAPAccessory : HMDUnassociatedAccessory {
    NSMutableArray *_accessoryServers;
}


@property (readonly, copy) NSArray *accessoryServers;
@property (nonatomic) NSInteger certificationStatus; // ivar: _certificationStatus
@property (readonly, nonatomic) NSInteger linkType; // ivar: _linkType
@property (readonly, nonatomic) NSData *setupHash; // ivar: _setupHash
@property (readonly, nonatomic) NSUInteger transportTypes;


-(BOOL)hasBTLELink;
-(BOOL)hasIPLink;
-(BOOL)isKnownToSystemCommissioner;
-(BOOL)isReachable;
-(BOOL)supportsCHIP;
-(NSInteger)associationOptions;
-(id)commissioningID;
-(id)descriptionWithPointer:(BOOL)arg0 additionalDescription:(id)arg1 ;
-(id)dumpDescription;
-(id)initWithAccessoryServer:(id)arg0 messageDispatcher:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 category:(id)arg2 messageDispatcher:(id)arg3 ;
-(id)nodeID;
-(id)preferredAccessoryServer;
-(id)productID;
-(id)rootPublicKey;
-(id)serialNumber;
-(id)vendorID;
-(void)addAccessoryServer:(id)arg0 ;
-(void)identifyWithCompletionHandler:(id)arg0 ;
-(void)removeAccessoryServer:(id)arg0 ;


@end


#endif