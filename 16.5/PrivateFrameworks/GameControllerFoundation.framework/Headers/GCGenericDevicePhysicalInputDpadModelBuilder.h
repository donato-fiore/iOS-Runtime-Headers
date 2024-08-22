// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEPHYSICALINPUTDPADMODELBUILDER_H
#define GCGENERICDEVICEPHYSICALINPUTDPADMODELBUILDER_H



#import "GCGenericDevicePhysicalInputElementModelBuilder.h"

@interface GCGenericDevicePhysicalInputDpadModelBuilder : GCGenericDevicePhysicalInputElementModelBuilder

@property (nonatomic) NSInteger sourceDownExtendedEventFieldIndex; // ivar: _sourceDownExtendedEventFieldIndex
@property (nonatomic) NSInteger sourceLeftExtendedEventFieldIndex; // ivar: _sourceLeftExtendedEventFieldIndex
@property (nonatomic) NSInteger sourceRightExtendedEventFieldIndex; // ivar: _sourceRightExtendedEventFieldIndex
@property (nonatomic) NSInteger sourceUpExtendedEventFieldIndex; // ivar: _sourceUpExtendedEventFieldIndex


+(Class)modelClass;
-(id)build;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif