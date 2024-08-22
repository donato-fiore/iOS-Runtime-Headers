// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEMODELBUILDER_H
#define GCGENERICDEVICEMODELBUILDER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GCGenericDeviceDriverModel.h"
#import "GCGenericDevicePhysicalInputModel.h"

@interface GCGenericDeviceModelBuilder : NSObject

@property (copy, nonatomic) GCGenericDeviceDriverModel *driver; // ivar: _driver
@property (copy, nonatomic) GCGenericDevicePhysicalInputModel *physicalInput; // ivar: _physicalInput
@property (copy, nonatomic) NSString *productCategory; // ivar: _productCategory
@property (copy, nonatomic) NSString *productName; // ivar: _productName


+(Class)modelClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)build;
-(id)init;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif