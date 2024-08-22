// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MODIFIERDEFINITION_H
#define MODIFIERDEFINITION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface ModifierDefinition : NSObject

@property (retain, nonatomic) NSArray *featureIds; // ivar: _featureIds
@property (retain, nonatomic) NSString *methodName; // ivar: _methodName


-(BOOL)isValid;
-(id)initWithModifierDefinitionDictionary:(id)arg0 ;


@end


#endif