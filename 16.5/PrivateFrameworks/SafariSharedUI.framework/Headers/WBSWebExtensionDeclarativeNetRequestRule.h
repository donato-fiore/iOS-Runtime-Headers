// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSWEBEXTENSIONDECLARATIVENETREQUESTRULE_H
#define WBSWEBEXTENSIONDECLARATIVENETREQUESTRULE_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionDeclarativeNetRequestRule : NSObject

@property (readonly, copy, nonatomic) NSDictionary *action; // ivar: _action
@property (readonly, copy, nonatomic) NSDictionary *condition; // ivar: _condition
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSInteger ruleID; // ivar: _ruleID
@property (readonly, nonatomic) NSArray *ruleInWebKitFormat;


-(NSInteger)compare:(id)arg0 ;
-(id)_allChromeResourceTypes;
-(id)_chromeDomainTypeToWebKitDomainType;
-(id)_chromeResourceTypeToWebKitLoadContext;
-(id)_chromeResourceTypeToWebKitResourceType;
-(id)_convertedResourceTypesForChromeResourceTypes:(id)arg0 ;
-(id)_convertedRulesForWebKitActionType:(id)arg0 chromeActionType:(id)arg1 ;
-(id)_regexURLFilterForChromeURLFilter:(id)arg0 ;
-(id)_resourcesToTargetWhenNoneAreSpecifiedInRule;
-(id)_validateHeaderInfoDictionary:(id)arg0 ;
-(id)_webKitRuleWithWebKitActionType:(id)arg0 chromeActionType:(id)arg1 chromeResourceTypes:(id)arg2 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 errorString:(*id)arg1 ;
-(void)removeInvalidResourceTypesForKey:(id)arg0 ;


@end


#endif