// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEACCOUNTMESSAGEDESTINATION_H
#define HMDREMOTEACCOUNTMESSAGEDESTINATION_H



#import "HMDRemoteAccountHandleMessageDestination.h"
#import "HMDAccount.h"

@interface HMDRemoteAccountMessageDestination : HMDRemoteAccountHandleMessageDestination

@property (readonly, nonatomic) HMDAccount *account; // ivar: _account


+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)initWithTarget:(id)arg0 account:(id)arg1 multicast:(BOOL)arg2 ;
-(id)initWithTarget:(id)arg0 account:(id)arg1 multicast:(BOOL)arg2 deviceCapabilities:(id)arg3 ;
-(id)initWithTarget:(id)arg0 handle:(id)arg1 multicast:(BOOL)arg2 deviceCapabilities:(id)arg3 ;
-(id)privateDescription;
-(id)remoteDestinationString;
-(id)shortDescription;


@end


#endif