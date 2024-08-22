// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUTESTPATTERNSOURCEDEFINITION_H
#define NUTESTPATTERNSOURCEDEFINITION_H



#import "NUSingleSourceDefinition.h"

@interface NUTestPatternSourceDefinition : NUSingleSourceDefinition

@property (readonly) NSInteger orientation; // ivar: _orientation
@property (readonly) ? size; // ivar: _size


-(NSInteger)mediaType;
-(id)generateSourceNodeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithSize:(struct ? )arg0 orientation:(NSInteger)arg1 ;


@end


#endif