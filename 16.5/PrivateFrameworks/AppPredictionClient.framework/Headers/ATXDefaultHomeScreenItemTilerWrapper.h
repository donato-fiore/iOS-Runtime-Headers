// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDEFAULTHOMESCREENITEMTILERWRAPPER_H
#define ATXDEFAULTHOMESCREENITEMTILERWRAPPER_H

@class NSArray;
@protocol ATXDefaultHomeScreenItemTiler;

#import <Foundation/Foundation.h>


@interface ATXDefaultHomeScreenItemTilerWrapper : NSObject {
    id<ATXDefaultHomeScreenItemTiler> *_tiler;
}


@property (readonly, nonatomic) NSArray *tiledHomeScreenItems;


-(id)initWithDefaultStack:(id)arg0 defaultWidgetsSmall:(id)arg1 defaultWidgetsMedium:(id)arg2 defaultWidgetsLarge:(id)arg3 defaultWidgetsExtraLarge:(id)arg4 widgetFamilyMask:(NSUInteger)arg5 gridSize:(NSUInteger)arg6 ;


@end


#endif