// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHOMESCREENCONFIGCACHE_H
#define ATXHOMESCREENCONFIGCACHE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenConfigCache : NSObject {
    NSString *_rootPath;
}




+(BOOL)appPredictionPanelExistsInPage:(id)arg0 ;
+(BOOL)hasWidgetsOnTheHomeScreenWithHomeScreenPages:(id)arg0 ;
+(BOOL)suggestionsWidgetExistsInPage:(id)arg0 ;
-(BOOL)_writeData:(id)arg0 toFileAtPath:(id)arg1 ;
-(BOOL)_writeRootObject:(id)arg0 toFileAtPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)hasWidgetsOnTheHomeScreen;
-(BOOL)writeDockAppList:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeHomeScreenPageConfigurations:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeTodayPageStacks:(id)arg0 appPredictionPanels:(id)arg1 error:(*id)arg2 ;
-(NSInteger)numOnboardingStacksOnTheHomeScreen;
-(NSInteger)pageIndexOfAppPredictionPanelWithIdentifier:(id)arg0 ;
-(id)_filePathForDockConfig;
-(id)_filePathForHomeScreenPageConfig;
-(id)_filePathForTodayPage;
-(id)_readDataFromFileAtPath:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)loadDockAppListWithError:(*id)arg0 ;
-(id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)arg0 error:(*id)arg1 ;
-(id)loadHomeScreenAndTodayPageConfigurationsWithError:(*id)arg0 ;
-(id)loadHomeScreenPageConfigurationsWithError:(*id)arg0 ;
-(id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(*id)arg0 ;
-(id)prettyPrintedJSON;


@end


#endif