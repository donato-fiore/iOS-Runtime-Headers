// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNMLMODELFACTORY_H
#define SNMLMODELFACTORY_H


#import <Foundation/Foundation.h>


@interface SNMLModelFactory : NSObject



+(Class)soundClassifierVersion1Modelclass;
+(Class)soundPrint100kFeatureExtractorModelClass;
+(Class)soundPrintAFeatureExtractorModelClass;
+(Class)soundPrintKFeatureExtractorModelClass;
+(Class)soundprint100kModelClassForSoundIdentifier:(id)arg0 ;
+(Class)vggishFeatureExtractorModelClass;
+(Class)vggishModelClassForSoundIdentifier:(id)arg0 ;
+(id)createModelOfClass:(Class)arg0 ;
+(id)createModelOfClass:(Class)arg0 modelConfiguration:(id)arg1 ;
+(id)createSharedLockedSoundClassifierVersion1;
+(id)createSoundClassifierVersion1;
+(id)createSoundPrint100kFeatureExtractorWithModelConfiguration:(id)arg0 ;
+(id)createSoundPrintAFeatureExtractorWithModelConfiguration:(id)arg0 ;
+(id)createSoundPrintKFeatureExtractor;
+(id)createVGGishFeatureExtractorWithModelConfiguration:(id)arg0 ;
+(id)defaultDetectorIdentifierForSoundIdentifier:(id)arg0 ;
+(id)sharedLockedModelOfClass:(Class)arg0 ;
+(id)sharedLockedModelOfClass:(Class)arg0 memoized:(BOOL)arg1 modelConfiguration:(id)arg2 ;
+(id)sharedLockedModelOfClass:(Class)arg0 modelConfiguration:(id)arg1 ;
+(id)sharedLockedModelWithKey:(id)arg0 orCreateNewModelWithWithFunction:(id)arg1 ;
+(id)sharedLockedSoundPrint100kFeatureExtractorWithModelConfiguration:(id)arg0 ;
+(id)sharedLockedSoundPrintAFeatureExtractorWithModelConfiguration:(id)arg0 ;
+(id)sharedLockedSoundPrintKFeatureExtractor;
+(id)sharedLockedVGGishFeatureExtractorWithModelConfiguration:(id)arg0 ;
+(id)splitDetectorInfoForDetectorIdentifier:(id)arg0 ;


@end


#endif