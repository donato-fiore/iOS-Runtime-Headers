// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMNLUPREPROCESSREQUESTCOMMAND_H
#define CDMNLUPREPROCESSREQUESTCOMMAND_H

@class SIRINLUEXTERNALCDMNluRequest;


#import "CDMServiceGraphProtoBackedCommand.h"

@interface CDMNLUPreprocessRequestCommand : CDMServiceGraphProtoBackedCommand

@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluRequest *siriNLUTypeObj; // ivar: _siriNLUTypeObj


+(Class)innerProtoType;
+(id)innerProtoPropertyName;
-(id)initWithNLURequest:(id)arg0 ;


@end


#endif