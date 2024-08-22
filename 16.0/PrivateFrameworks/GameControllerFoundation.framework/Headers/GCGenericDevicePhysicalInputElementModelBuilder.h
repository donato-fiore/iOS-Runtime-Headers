// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCGENERICDEVICEPHYSICALINPUTELEMENTMODELBUILDER_H
#define GCGENERICDEVICEPHYSICALINPUTELEMENTMODELBUILDER_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface GCGenericDevicePhysicalInputElementModelBuilder : NSObject

@property (copy, nonatomic, getter=isAnalog) NSNumber *analog; // ivar: _analog
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *localizedNameKey; // ivar: _localizedNameKey
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *symbolName; // ivar: _symbolName


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