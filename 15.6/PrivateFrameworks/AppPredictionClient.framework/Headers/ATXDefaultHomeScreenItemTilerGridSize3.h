// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDEFAULTHOMESCREENITEMTILERGRIDSIZE3_H
#define ATXDEFAULTHOMESCREENITEMTILERGRIDSIZE3_H

@class NSMutableArray, NSString, NSArray;
@protocol ATXDefaultHomeScreenItemTiler;

#import <Foundation/Foundation.h>

#import "ATXDefaultWidgetStack.h"
#import "ATXDefaultHomeScreenItemTilerHelper.h"

@interface ATXDefaultHomeScreenItemTilerGridSize3 : NSObject <ATXDefaultHomeScreenItemTiler>

 {
    ATXDefaultWidgetStack *_defaultStack;
    NSMutableArray *_defaultWidgetsSmall;
    NSMutableArray *_defaultWidgetsMedium;
    NSMutableArray *_defaultWidgetsLarge;
    NSUInteger _widgetFamilyMask;
    ATXDefaultHomeScreenItemTilerHelper *_tilerHelper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tiledHomeScreenItems;


-(BOOL)_addFirstRow:(id)arg0 ;
-(BOOL)_addMediumRow:(id)arg0 ;
-(BOOL)_addRow:(id)arg0 rowSizePreference:(NSUInteger)arg1 allowAlternateRowSizeAsBackup:(BOOL)arg2 ;
-(BOOL)_addRow:(id)arg0 rowType:(NSUInteger)arg1 ;
-(BOOL)_addSmallRow:(id)arg0 ;
-(id)initWithDefaultStack:(id)arg0 defaultWidgetsSmall:(id)arg1 defaultWidgetsMedium:(id)arg2 defaultWidgetsLarge:(id)arg3 defaultWidgetsExtraLarge:(id)arg4 widgetFamilyMask:(NSUInteger)arg5 ;


@end


#endif