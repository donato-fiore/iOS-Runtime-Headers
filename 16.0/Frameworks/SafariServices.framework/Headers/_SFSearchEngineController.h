// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFSEARCHENGINECONTROLLER_H
#define _SFSEARCHENGINECONTROLLER_H

@class NSArray, NSDictionary, NSString;
@protocol WBSSearchProviderContext, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_SFSearchEngineInfo.h"

@interface _SFSearchEngineController : NSObject <WBSSearchProviderContext>

 {
    NSArray *_searchEngines;
    NSUInteger _defaultSearchEngineIndex;
    NSObject<OS_dispatch_queue> *_searchEnginesQueue;
    _SFSearchEngineInfo *_defaultSearchEngine;
}


@property (readonly, copy, nonatomic) NSDictionary *carrierTemplateParameterValues; // ivar: _carrierTemplateParameterValues
@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _SFSearchEngineInfo *defaultSearchEngineIfPopulated;
@property (readonly, copy, nonatomic) NSString *defaultSearchEngineName;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly, copy, nonatomic) NSArray *engines;
@property (readonly, copy, nonatomic) NSArray *enginesAvailableForUnifiedFieldSearching;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isChinaDevice;
@property (readonly, copy, nonatomic) NSArray *searchEngineNames;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *systemLanguage; // ivar: _systemLanguage
@property (readonly, copy, nonatomic) NSDictionary *templateParameterValues; // ivar: _templateParameterValues


+(BOOL)_deviceRegionCodeIsChina;
+(id)sharedInstance;
+(id)sharedInstanceIfAvailable;
+(void)_initializeSharedInstance;
+(void)loadSystemLanguageProperties;
-(BOOL)isSearchProviderEnabled:(NSUInteger)arg0 ;
-(id)_existingEngineInfoFor:(id)arg0 ;
-(id)_specialSearchEngines;
-(id)defaultSearchEngine;
-(id)engineInfoFor:(id)arg0 ;
-(id)engineInfoForScriptName:(id)arg0 ;
-(id)init;
-(id)safeSearchRequestForSearchRequest:(id)arg0 ;
-(void)_addAllWebSearchEngineInfosToArray:(id)arg0 andAddUserVisibleWebSearchEngineInfosToArray:(id)arg1 ;
-(void)_getEngines:(*id)arg0 defaultSearchEngineIndex:(*NSUInteger)arg1 ;
-(void)_loadSystemPropertiesForSearchEngine:(id)arg0 ;
-(void)_populateSearchEngines;
-(void)_postDefaultSearchEngineDidChange;
-(void)_setDefaultSearchEngine:(id)arg0 ;
-(void)reloadSearchEngines;
-(void)setDefaultSearchEngine:(id)arg0 ;


@end


#endif