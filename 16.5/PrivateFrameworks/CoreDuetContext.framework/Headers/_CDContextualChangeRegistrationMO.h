// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDCONTEXTUALCHANGEREGISTRATIONMO_H
#define _CDCONTEXTUALCHANGEREGISTRATIONMO_H

@class NSManagedObject, NSDate, NSString, NSData;



@interface _CDContextualChangeRegistrationMO : NSManagedObject

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isMultiDeviceRegistration;
@property (retain, nonatomic) NSData *properties;


+(id)materializedRegistrationFrom:(id)arg0 ;
+(id)predicateForActiveRegistrationsInBootSession:(id)arg0 ;
+(void)hydrateMO:(id)arg0 fromRegistration:(id)arg1 ;


@end


#endif