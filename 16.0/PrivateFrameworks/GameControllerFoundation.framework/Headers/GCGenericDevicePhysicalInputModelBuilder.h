// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCGENERICDEVICEPHYSICALINPUTMODELBUILDER_H
#define GCGENERICDEVICEPHYSICALINPUTMODELBUILDER_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface GCGenericDevicePhysicalInputModelBuilder : NSObject

@property (copy, nonatomic) NSSet *elements; // ivar: _elements


+(Class)modelClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)build;
-(id)init;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif