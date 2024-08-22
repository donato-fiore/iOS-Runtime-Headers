// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUSINGLESOURCEDEFINITION_H
#define NUSINGLESOURCEDEFINITION_H

@protocol NUSourceDerivation;


#import "NUSourceDefinition.h"

@interface NUSingleSourceDefinition : NUSourceDefinition

@property (retain) NSObject<NUSourceDerivation> *sourceDerivation; // ivar: _sourceDerivation


-(id)generateSourceNodeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)sourceContainerNodeWithIdentifier:(id)arg0 error:(*id)arg1 ;


@end


#endif