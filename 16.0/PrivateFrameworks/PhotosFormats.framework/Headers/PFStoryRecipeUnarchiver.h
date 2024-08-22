// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFSTORYRECIPEUNARCHIVER_H
#define PFSTORYRECIPEUNARCHIVER_H


#import <Foundation/Foundation.h>


@interface PFStoryRecipeUnarchiver : NSObject



-(id)_existingKeyInDictionary:(id)arg0 forObject:(id)arg1 ;
-(id)_unarchivedClipWithJSONObject:(id)arg0 ;
-(id)_unarchivedDecisionListWithJSONObject:(id)arg0 songAssetIdentifier:(id)arg1 ;
-(id)_unarchivedLibraryWithJSONObject:(id)arg0 error:(*id)arg1 ;
-(id)_unarchivedStyleWithJSONObject:(id)arg0 ;
-(id)unarchivedAssetWithJSONObject:(id)arg0 error:(*id)arg1 ;
-(id)unarchivedRecipeWithData:(id)arg0 error:(*id)arg1 ;
-(id)unarchivedRecipeWithJSONObject:(id)arg0 error:(*id)arg1 ;
-(struct ? )_unarchivedDurationInfoWithJSONObject:(id)arg0 ;
-(struct ? )_unarchivedOverallDurationInfoWithJSONObject:(id)arg0 ;
-(struct ? )unarchiveTimeWithJSONObject:(id)arg0 ;


@end


#endif