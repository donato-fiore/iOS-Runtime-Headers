// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFRECORDPROPERTYMAPPING_H
#define WFRECORDPROPERTYMAPPING_H


#import <Foundation/Foundation.h>

#import "WFRecordProperty.h"

@interface WFRecordPropertyMapping : NSObject

@property (weak, nonatomic) id *destinationObject; // ivar: _destinationObject
@property (retain, nonatomic) WFRecordProperty *destinationProperty; // ivar: _destinationProperty
@property (weak, nonatomic) id *sourceObject; // ivar: _sourceObject
@property (retain, nonatomic) WFRecordProperty *sourceProperty; // ivar: _sourceProperty


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(SEL)getterSelector;
-(SEL)setterSelector;
-(id)getterMethodSignature;
-(id)initWithSourceObject:(id)arg0 property:(id)arg1 destinationObject:(id)arg2 property:(id)arg3 ;
-(id)setterMethodSignature;
-(void)invokeGetterWithBuffer:(**void)arg0 length:(*NSUInteger)arg1 ;
-(void)invokeSetterWithBuffer:(**void)arg0 length:(*NSUInteger)arg1 ;
-(void)propagate;
-(void)propagate:(BOOL)arg0 ;
-(void)propagateUsingKVC;
-(void)propagateUsingSetter;


@end


#endif