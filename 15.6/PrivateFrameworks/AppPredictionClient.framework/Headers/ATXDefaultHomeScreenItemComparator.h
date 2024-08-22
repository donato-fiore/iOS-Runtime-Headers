// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXDEFAULTHOMESCREENITEMCOMPARATOR_H
#define ATXDEFAULTHOMESCREENITEMCOMPARATOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ATXDefaultWidgetStack.h"

@interface ATXDefaultHomeScreenItemComparator : NSObject

@property (retain) ATXDefaultWidgetStack *defaultStack; // ivar: _defaultStack
@property (retain) NSArray *galleryItems; // ivar: _galleryItems


-(BOOL)isStackDefaultStack:(id)arg0 ;
-(NSUInteger)rankOfWidgetSuggestedInGallery:(id)arg0 ;
-(void)loadDefaultItemsWithCompletionHandler:(id)arg0 ;


@end


#endif