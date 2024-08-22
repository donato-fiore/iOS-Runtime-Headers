// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGENERICDEVICEDATAPROCESSOREXPRESSIONMODELBUILDER_H
#define GCGENERICDEVICEDATAPROCESSOREXPRESSIONMODELBUILDER_H


#import <Foundation/Foundation.h>


@interface GCGenericDeviceDataProcessorExpressionModelBuilder : NSObject



+(Class)modelClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)build;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(void)initializeWithModel:(id)arg0 ;
-(void)reset;


@end


#endif