// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDEFAULTHOMESCREENITEMTILERPODBUILDER_H
#define ATXDEFAULTHOMESCREENITEMTILERPODBUILDER_H

@class NSString, NSMutableArray, NSArray;
@protocol ATXDefaultHomeScreenItemTiler;

#import <Foundation/Foundation.h>

#import "ATXDefaultWidgetStack.h"
#import "ATXDefaultHomeScreenItemTilerHelper.h"

@interface ATXDefaultHomeScreenItemTilerPodBuilder : NSObject <ATXDefaultHomeScreenItemTiler>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ATXDefaultWidgetStack *defaultStack; // ivar: _defaultStack
@property (retain, nonatomic) NSMutableArray *defaultWidgetsExtraLarge; // ivar: _defaultWidgetsExtraLarge
@property (retain, nonatomic) NSMutableArray *defaultWidgetsLarge; // ivar: _defaultWidgetsLarge
@property (retain, nonatomic) NSMutableArray *defaultWidgetsMedium; // ivar: _defaultWidgetsMedium
@property (retain, nonatomic) NSMutableArray *defaultWidgetsSmall; // ivar: _defaultWidgetsSmall
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tiledHomeScreenItems;
@property (retain, nonatomic) ATXDefaultHomeScreenItemTilerHelper *tilerHelper; // ivar: _tilerHelper
@property (nonatomic) NSUInteger widgetFamilyMask; // ivar: _widgetFamilyMask


-(NSUInteger)_addPod:(id)arg0 podType:(NSUInteger)arg1 podsAdded:(NSUInteger)arg2 ;
-(NSUInteger)_addPodTypeFourSmalls:(id)arg0 ;
-(NSUInteger)_addPodTypeOneExtraLarge:(id)arg0 podsAdded:(NSUInteger)arg1 ;
-(NSUInteger)_addPodTypeOneLarge:(id)arg0 ;
-(NSUInteger)_addPodTypeOneMediumAndTwoSmalls:(id)arg0 ;
-(NSUInteger)_addPodTypeTwoMediums:(id)arg0 ;
-(NSUInteger)_addPodTypeTwoSmallsAndOneMedium:(id)arg0 ;
-(NSUInteger)addFirstPod:(id)arg0 ;
-(NSUInteger)addPod:(id)arg0 podType:(NSUInteger)arg1 allowAlternatePodTypeAsBackup:(BOOL)arg2 podsAdded:(NSUInteger)arg3 ;
-(id)initWithDefaultStack:(id)arg0 defaultWidgetsSmall:(id)arg1 defaultWidgetsMedium:(id)arg2 defaultWidgetsLarge:(id)arg3 defaultWidgetsExtraLarge:(id)arg4 widgetFamilyMask:(NSUInteger)arg5 ;


@end


#endif