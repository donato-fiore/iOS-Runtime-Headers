// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMNLUPREPROCESSRESPONSECOMMAND_H
#define CDMNLUPREPROCESSRESPONSECOMMAND_H

@class SIRINLUINTERNALPreprocessingWrapper;


#import "CDMServiceGraphProtoBackedCommand.h"

@interface CDMNLUPreprocessResponseCommand : CDMServiceGraphProtoBackedCommand

@property (readonly, nonatomic) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper; // ivar: _preprocessingWrapper


+(Class)innerProtoType;
+(id)innerProtoPropertyName;
-(id)initWithPreprocessingWrapper:(id)arg0 ;


@end


#endif