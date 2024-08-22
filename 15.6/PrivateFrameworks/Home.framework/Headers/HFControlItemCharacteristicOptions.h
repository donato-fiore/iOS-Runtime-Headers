// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCONTROLITEMCHARACTERISTICOPTIONS_H
#define HFCONTROLITEMCHARACTERISTICOPTIONS_H

@class NSSet, NSDictionary, NSString;
@protocol NAIdentifiable;

#import <Foundation/Foundation.h>


@interface HFControlItemCharacteristicOptions : NSObject <NAIdentifiable>



@property (readonly, copy, nonatomic) NSSet *allCharacteristicTypes;
@property (readonly, copy, nonatomic) NSSet *allRequiredCharacteristicTypes;
@property (readonly, copy, nonatomic) NSDictionary *characteristicTypesByUsage; // ivar: _characteristicTypesByUsage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)na_identity;
+(id)optionsWithReadWriteCharacteristicTypes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_characteristicTypesForUsagesPassingTest:(id)arg0 ;
-(id)_optionsByReducingWithOptions:(id)arg0 reducer:(id)arg1 ;
-(id)characteristicTypesForUsage:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCharacteristicTypesByUsage:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)optionsByAddingCharacteristicOptions:(id)arg0 ;
-(id)optionsByAddingCharacteristicTypes:(id)arg0 forUsage:(NSUInteger)arg1 ;
-(id)optionsByIntersectingWithOptions:(id)arg0 ;


@end


#endif