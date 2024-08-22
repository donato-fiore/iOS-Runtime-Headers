// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNLPITFMMODELBUNDLE_H
#define SNLPITFMMODELBUNDLE_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface SNLPITFMModelBundle : NSObject

@property (readonly, nonatomic) NSURL *configURL; // ivar: _configURL
@property (readonly, nonatomic) NSURL *contextVocabularyURL; // ivar: _contextVocabularyURL
@property (readonly, nonatomic) NSURL *espressoModelURL; // ivar: _espressoModelURL
@property (readonly, nonatomic) NSURL *spanVocabularyURL; // ivar: _spanVocabularyURL
@property (readonly, nonatomic) NSURL *versionURL; // ivar: _versionURL


+(id)_errorForMissingResourceURL:(id)arg0 errorDomain:(id)arg1 ;
+(id)_existErrorForEspressoModelURL:(id)arg0 configURL:(id)arg1 contextVocabularyURL:(id)arg2 spanVocabularyURL:(id)arg3 versionURL:(id)arg4 errorDomain:(id)arg5 ;
+(id)bundleWithEspressoModelURL:(id)arg0 configURL:(id)arg1 contextVocabularyURL:(id)arg2 spanVocabularyURL:(id)arg3 versionURL:(id)arg4 errorDomain:(id)arg5 error:(*id)arg6 ;
-(id)_initWithEspressoModelURL:(id)arg0 configURL:(id)arg1 contextVocabularyURL:(id)arg2 spanVocabularyURL:(id)arg3 versionURL:(id)arg4 ;


@end


#endif