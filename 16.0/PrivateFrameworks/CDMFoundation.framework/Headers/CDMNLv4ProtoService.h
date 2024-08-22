// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMNLV4PROTOSERVICE_H
#define CDMNLV4PROTOSERVICE_H

@class SNLPNaturalLanguageParser;


#import "CDMDAGBaseService.h"

@interface CDMNLv4ProtoService : CDMDAGBaseService {
    SNLPNaturalLanguageParser *_parser;
}




+(id)assetFolderNames;
+(id)buildEmptyNLv4ResponseCommand:(id)arg0 ;
+(id)getParserEnum;
+(id)trialFactorName;
-(id)assetsPathURLForModelBundle:(id)arg0 ;
-(id)buildNLv4ResponseCommand:(id)arg0 requestId:(id)arg1 ;
-(id)doNLv4Inference:(id)arg0 outError:(*id)arg1 ;
-(id)handle:(id)arg0 ;
-(id)handleRequestCommandTypeNames;
-(id)parserFromAssetDirectory:(id)arg0 error:(*id)arg1 ;
-(id)setup:(id)arg0 ;


@end


#endif