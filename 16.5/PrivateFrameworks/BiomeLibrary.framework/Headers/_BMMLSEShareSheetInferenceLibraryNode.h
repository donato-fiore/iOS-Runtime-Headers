// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BMMLSESHARESHEETINFERENCELIBRARYNODE_H
#define _BMMLSESHARESHEETINFERENCELIBRARYNODE_H

@class BMLibraryNode;



@interface _BMMLSEShareSheetInferenceLibraryNode : BMLibraryNode



+(id)AppSuggestions;
+(id)PeopleSuggestions;
+(id)configurationForAppSuggestions;
+(id)configurationForPeopleSuggestions;
+(id)identifier;
+(id)storeConfigurationForAppSuggestions;
+(id)storeConfigurationForPeopleSuggestions;
+(id)streamNames;
+(id)streamWithName:(id)arg0 ;
+(id)sublibraries;
+(id)syncPolicyForAppSuggestions;
+(id)syncPolicyForPeopleSuggestions;
+(id)validKeyPaths;


@end


#endif