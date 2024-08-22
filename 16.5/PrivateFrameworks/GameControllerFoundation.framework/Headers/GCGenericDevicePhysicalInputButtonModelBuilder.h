// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEPHYSICALINPUTBUTTONMODELBUILDER_H
#define GCGENERICDEVICEPHYSICALINPUTBUTTONMODELBUILDER_H



#import "GCGenericDevicePhysicalInputElementModelBuilder.h"

@interface GCGenericDevicePhysicalInputButtonModelBuilder : GCGenericDevicePhysicalInputElementModelBuilder

@property (nonatomic) NSInteger sourceExtendedEventFieldIndex; // ivar: _sourceExtendedEventFieldIndex


+(Class)modelClass;
-(id)build;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif