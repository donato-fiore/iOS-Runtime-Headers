// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCORETRANSPORTPAYLOAD_H
#define STCORETRANSPORTPAYLOAD_H

@class NSManagedObject, NSArray, NSString, NSData;


#import "STCoreOrganization.h"

@interface STCoreTransportPayload : NSManagedObject

@property (copy, nonatomic) NSArray *destinations;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSData *payloadData;
@property (retain, nonatomic) STCoreOrganization *sourceOrganizationEnqueued;
@property (retain, nonatomic) STCoreOrganization *sourceOrganizationPending;
@property (retain, nonatomic) STCoreOrganization *sourceOrganizationRecent;
@property (copy, nonatomic) NSString *type;


+(id)fetchLastTransportPayloadInContext:(id)arg0 ofType:(id)arg1 error:(*id)arg2 ;
+(id)fetchRequestForPayloadsOfType:(id)arg0 ;
+(id)fetchTransportPayloadContext:(id)arg0 withIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)description;


@end


#endif