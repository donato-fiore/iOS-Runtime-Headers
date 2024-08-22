// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SADPDEVICEDETAIL_H
#define SADPDEVICEDETAIL_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "SADomainObject.h"
#import "SAPerson.h"

@interface SADPDeviceDetail : SADomainObject <SAAceSerializable>



@property (nonatomic) BOOL canPlaySound;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceClass;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *deviceLocality;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *emoji;
@property (nonatomic) BOOL foundNearby;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAPerson *owner;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSArray *productTypes;
@property (readonly) Class superclass;
@property (nonatomic) BOOL thisDevice;


+(id)deviceDetail;
+(id)deviceDetailWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif