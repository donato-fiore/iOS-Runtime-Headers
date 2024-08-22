// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFBROWSERCONFIGURATION_H
#define _SFBROWSERCONFIGURATION_H

@protocol UITraitEnvironment;

#import <Foundation/Foundation.h>


@interface _SFBrowserConfiguration : NSObject {
    NSInteger _configuration;
}


@property (readonly, nonatomic) BOOL allowsClosingLastTab;
@property (readonly, nonatomic) BOOL allowsKeyboardCorrectionLearning;
@property (readonly, nonatomic) BOOL allowsPersistingTabState;
@property (readonly, nonatomic) BOOL allowsReopeningClosedTabs;
@property (readonly, nonatomic) BOOL allowsRestoringEducationTabs;
@property (readonly, nonatomic) BOOL allowsSearchFeedback;
@property (readonly, nonatomic) BOOL allowsSearchSuggestions;
@property (readonly, nonatomic) BOOL allowsSiteSpecificSearch;
@property (readonly, nonatomic) BOOL allowsSpeculativeLoading;
@property (readonly, nonatomic) BOOL allowsStreamlinedLogin;
@property (readonly, nonatomic) BOOL allowsUserActivityFeedback;
@property (readonly, nonatomic) NSInteger barTintStyle;
@property (readonly, nonatomic, getter=isControlledByAutomation) BOOL controlledByAutomation;
@property (readonly, nonatomic, getter=isPrivateBrowsingEnabled) BOOL privateBrowsingEnabled;
@property (readonly, weak, nonatomic) NSObject<UITraitEnvironment> *traitEnvironment; // ivar: _traitEnvironment
@property (readonly, nonatomic) BOOL usesDarkTheme;
@property (readonly, nonatomic) BOOL usesPersistentDataStore;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithPrivateBrowsingEnabled:(BOOL)arg0 traitEnvironment:(id)arg1 controlledByAutomation:(BOOL)arg2 ;


@end


#endif