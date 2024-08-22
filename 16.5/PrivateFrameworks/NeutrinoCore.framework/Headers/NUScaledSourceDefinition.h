// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUSCALEDSOURCEDEFINITION_H
#define NUSCALEDSOURCEDEFINITION_H



#import "NUSingleSourceDefinition.h"

@interface NUScaledSourceDefinition : NUSingleSourceDefinition

@property (readonly) ? fullSize; // ivar: _fullSize
@property (readonly) NUSingleSourceDefinition *source; // ivar: _source
@property (readonly) ? sourceSize; // ivar: _sourceSize


-(NSInteger)mediaType;
-(id)description;
-(id)initWithSourceDefinition:(id)arg0 sourceSize:(struct ? )arg1 fullSize:(struct ? )arg2 ;
-(id)sourceContainerNodeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(struct ? )scale;


@end


#endif