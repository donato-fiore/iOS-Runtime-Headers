// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSDEVICEOFFERREGISTRATIONGROUP_H
#define AMSDEVICEOFFERREGISTRATIONGROUP_H

@class NSString, NSArray;
@protocol AMSStorageDatabasePersistable;

#import <Foundation/Foundation.h>


@interface AMSDeviceOfferRegistrationGroup : NSObject <AMSStorageDatabasePersistable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *registrationItems; // ivar: _registrationItems
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger validationOptions; // ivar: _validationOptions


-(BOOL)_serialsMatchSerialsFromGroup:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRegistrationGroup:(id)arg0 ;
-(BOOL)isModifiedVersionOfGroup:(id)arg0 ;
-(id)_initWithRegistrationItems:(id)arg0 validationOptions:(NSUInteger)arg1 ;
-(id)initWithDatabaseEntry:(id)arg0 ;
-(id)initWithRegistrationItems:(id)arg0 ;
-(id)serializeToDictionary;


@end


#endif