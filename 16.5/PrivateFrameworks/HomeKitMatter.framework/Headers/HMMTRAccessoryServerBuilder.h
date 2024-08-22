// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRACCESSORYSERVERBUILDER_H
#define HMMTRACCESSORYSERVERBUILDER_H

@class HMFObject;


#import "HMMTRAccessoryServer.h"

@interface HMMTRAccessoryServerBuilder : HMFObject

@property (retain, nonatomic) HMMTRAccessoryServer *accessoryServer; // ivar: _accessoryServer


-(id)addService:(id)arg0 ;
-(id)build;
-(id)category:(id)arg0 ;
-(id)discriminator:(id)arg0 ;
-(id)identifier:(id)arg0 ;
-(id)initWithKeystore:(id)arg0 browser:(id)arg1 ;
-(id)manufacturer:(id)arg0 ;
-(id)model:(id)arg0 ;
-(id)name:(id)arg0 ;
-(id)nodeID:(id)arg0 ;
-(id)productID:(id)arg0 ;
-(id)serialNumber:(id)arg0 ;
-(id)setUpPinCode:(id)arg0 ;
-(id)vendorID:(id)arg0 ;


@end


#endif