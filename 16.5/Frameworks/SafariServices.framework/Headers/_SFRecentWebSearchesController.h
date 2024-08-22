// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFRECENTWEBSEARCHESCONTROLLER_H
#define _SFRECENTWEBSEARCHESCONTROLLER_H

@class WBSRecentWebSearchesController, NSString;



@interface _SFRecentWebSearchesController : WBSRecentWebSearchesController {
    NSString *_pathToLegacySearchesFile;
}




+(NSUInteger)_maximumNumberOfSearchesToTrack;
-(id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg0 ;
-(id)initWithPathToLegacySearchesFile:(id)arg0 ;
-(void)_migrateLegacyData;
-(void)_removeLegacyRecentSearchesData;
-(void)_saveRecentSearchDictionaries:(id)arg0 toUserDefaultsUsingKey:(id)arg1 ;


@end


#endif