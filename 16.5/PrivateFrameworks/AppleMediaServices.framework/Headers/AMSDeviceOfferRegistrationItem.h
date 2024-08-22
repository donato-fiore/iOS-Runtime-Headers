// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSDEVICEOFFERREGISTRATIONITEM_H
#define AMSDEVICEOFFERREGISTRATIONITEM_H

@class NSString, NSData;
@protocol AMSStorageDatabasePersistable;

#import <Foundation/Foundation.h>


@interface AMSDeviceOfferRegistrationItem : NSObject <AMSStorageDatabasePersistable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *validationData; // ivar: _validationData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRegistrationItem:(id)arg0 ;
-(id)initWithDatabaseEntry:(id)arg0 ;
-(id)initWithSerialNumber:(id)arg0 model:(id)arg1 validationData:(id)arg2 ;
-(id)serializeToDictionary;


@end


#endif