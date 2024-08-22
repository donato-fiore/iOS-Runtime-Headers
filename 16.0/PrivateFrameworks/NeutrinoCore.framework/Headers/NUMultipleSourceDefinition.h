// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUMULTIPLESOURCEDEFINITION_H
#define NUMULTIPLESOURCEDEFINITION_H

@class NSArray;


#import "NUSourceDefinition.h"

@interface NUMultipleSourceDefinition : NUSourceDefinition

@property (readonly) NSArray *sourceDefinitions; // ivar: _sourceDefinitions


-(NSInteger)mediaType;
-(id)description;
-(id)init;
-(id)initWithSourceDefinitions:(id)arg0 ;
-(id)sourceContainerNodeWithIdentifier:(id)arg0 error:(*id)arg1 ;


@end


#endif