// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPMODELCONFIGURATION_H
#define UPMODELCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UPModelConfiguration : NSObject

@property (readonly, copy) NSString *bioLabelsVocabPath; // ivar: _bioLabelsVocabPath
@property (readonly, copy) NSString *calibrationEspressoModelPath; // ivar: _calibrationEspressoModelPath
@property (readonly, copy) NSString *configPath; // ivar: _configPath
@property (readonly, copy) NSString *espressoModelPath; // ivar: _espressoModelPath
@property (readonly, copy) NSString *grammarPath; // ivar: _grammarPath
@property (readonly, copy) NSString *intentVocabPath; // ivar: _intentVocabPath
@property (readonly, copy) NSString *parserEspressoModelPath; // ivar: _parserEspressoModelPath
@property (readonly, copy) NSString *spanVocabPath; // ivar: _spanVocabPath


+(id)_configurationWithBioLabelsVocabPath:(id)arg0 configPath:(id)arg1 grammarPath:(id)arg2 intentVocabPath:(id)arg3 spanVocabPath:(id)arg4 parserEspressoModelPath:(id)arg5 calibrationEspressoModelPath:(id)arg6 error:(*id)arg7 ;
+(id)configurationFromDirectoryUrl:(id)arg0 error:(*id)arg1 ;
-(id)_initWithBioLabelsVocabPath:(id)arg0 configPath:(id)arg1 grammarPath:(id)arg2 intentVocabPath:(id)arg3 spanVocabPath:(id)arg4 parserEspressoModelPath:(id)arg5 calibrationEspressoModelPath:(id)arg6 ;


@end


#endif