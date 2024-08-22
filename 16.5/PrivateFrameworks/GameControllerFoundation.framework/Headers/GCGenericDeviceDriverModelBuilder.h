// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEDRIVERMODELBUILDER_H
#define GCGENERICDEVICEDRIVERMODELBUILDER_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "GCGenericDeviceInputEventDriverModel.h"
#import "GCGenericDeviceRumbleModel.h"

@interface GCGenericDeviceDriverModelBuilder : NSObject

@property (copy, nonatomic) NSSet *elements; // ivar: _elements
@property (copy, nonatomic) GCGenericDeviceInputEventDriverModel *input; // ivar: _input
@property (copy, nonatomic) GCGenericDeviceRumbleModel *rumble; // ivar: _rumble


+(Class)modelClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)build;
-(id)init;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif