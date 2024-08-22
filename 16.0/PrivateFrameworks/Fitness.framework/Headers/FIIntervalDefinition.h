// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIINTERVALDEFINITION_H
#define FIINTERVALDEFINITION_H

@class HKQuantity;
@protocol FIDictionaryRepresentable;

#import <Foundation/Foundation.h>


@interface FIIntervalDefinition : NSObject <FIDictionaryRepresentable>



@property (readonly, nonatomic) HKQuantity *quantity; // ivar: _quantity
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)definitionFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)intervalDefinitionWithTypeIdentifier:(NSInteger)arg0 quantity:(id)arg1 ;
-(id)byChangingType:(NSInteger)arg0 quantity:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithTypeIdentifier:(NSInteger)arg0 quantity:(id)arg1 ;


@end


#endif