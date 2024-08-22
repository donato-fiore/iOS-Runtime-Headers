// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARAPPLMARTIFACT_H
#define _EARAPPLMARTIFACT_H

@class EARArtifact, NSString;



@interface _EARAppLmArtifact : EARArtifact {
    ? _cachedLmData;
    NSString *_cachedConfigFilepath;
    NSString *_cachedNcsRoot;
    NSString *_cachedDataRoot;
}




+(BOOL)createEmptyArtifact:(id)arg0 version:(id)arg1 locale:(id)arg2 saveTo:(id)arg3 ;
+(BOOL)createPhraseCountsArtifact:(id)arg0 version:(id)arg1 locale:(id)arg2 rawPhraseCountsPath:(id)arg3 customPronunciationsPath:(id)arg4 saveTo:(id)arg5 ;
+(BOOL)transitionArtifactAt:(id)arg0 toStage:(NSUInteger)arg1 configPath:(id)arg2 ncsRoot:(id)arg3 dataRoot:(id)arg4 estimationRoot:(id)arg5 minimize:(BOOL)arg6 saveTo:(id)arg7 ;
+(id)loadLmHandleFromArtifactAt:(id)arg0 configPath:(id)arg1 ncsRoot:(id)arg2 ;
-(?)_cacheLmData:(?)arg0 configFilepath:(?)arg1 ncsRootdataRoot;
-(?)_loadRawAppLmData:(?)arg0 ncsRootdataRoot;
-(?)_tryToLoadCachedLmData:(?)arg0 ncsRootdataRoot;
-(BOOL)isAdaptableToSpeechModelVersion:(id)arg0 locale:(id)arg1 ;
-(NSUInteger)getLifeCycleStage;
-(id)initWithAppLmArtifact:(struct shared_ptr<quasar::artifact::AppLmArtifact> )arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithVersion:(id)arg0 andLocale:(id)arg1 ;
-(id)loadAppLmData:(id)arg0 ncsRoot:(id)arg1 dataRoot:(id)arg2 ;
-(id)loadCustomPronData:(id)arg0 ncsRoot:(id)arg1 dataRoot:(id)arg2 ;
-(id)loadLmHandle;
-(id)loadOovs;


@end


#endif