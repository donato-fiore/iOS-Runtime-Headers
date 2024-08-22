// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPPLNERHANDLER_H
#define UPPLNERHANDLER_H


#import <Foundation/Foundation.h>

#import "UPPLPostProcessor.h"

@interface UPPLNerHandler : NSObject {
    unique_ptr<global_ner::GlobalNerHandler, std::default_delete<global_ner::GlobalNerHandler>> _handler;
    UPPLPostProcessor *_postProcessor;
}


@property (readonly, nonatomic) NSUInteger beamSize; // ivar: _beamSize
@property (readonly, nonatomic) NSUInteger maxTokenLength; // ivar: _maxTokenLength
@property (readonly, nonatomic) NSUInteger maxTokens; // ivar: _maxTokens
@property (readonly, nonatomic) BOOL useDropOut; // ivar: _useDropOut
@property (readonly, nonatomic) BOOL wordCharactersTensorEnabled; // ivar: _wordCharactersTensorEnabled
@property (readonly, nonatomic) BOOL wordLengthTensorEnabled; // ivar: _wordLengthTensorEnabled


-(id)generatePlumSpansForRequest:(id)arg0 ;
-(id)initWithLocale:(id)arg0 modelDir:(id)arg1 vocabTagsFile:(id)arg2 transParamsFile:(id)arg3 charIndicesFile:(id)arg4 configFile:(id)arg5 ;
-(id)initWithLocale:(id)arg0 modelDir:(id)arg1 vocabTagsFile:(id)arg2 transParamsFile:(id)arg3 charIndicesFile:(id)arg4 configFile:(id)arg5 padCharacter:(id)arg6 unkCharacter:(id)arg7 ;
-(id)predictNamedEntitiesForRequest:(id)arg0 ;
-(void)loadConfigs:(id)arg0 ;


@end


#endif