// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATALOGVIEWCONTROLLERSTATE_H
#define CATALOGVIEWCONTROLLERSTATE_H

@class UIViewController, NSString;

#import <Foundation/Foundation.h>


@interface CatalogViewControllerState : NSObject

@property (retain, nonatomic) UIViewController *completionDetailViewController; // ivar: _completionDetailViewController
@property (nonatomic) NSInteger favoritesState; // ivar: _favoritesState
@property (nonatomic) BOOL fieldIsEmpty; // ivar: _fieldIsEmpty
@property (copy, nonatomic) NSString *queryString; // ivar: _queryString
@property (nonatomic, getter=isShowingCompletions) BOOL showingCompletions; // ivar: _showingCompletions
@property (nonatomic, getter=isShowingUniversalFirstTimeExperience) BOOL showingUniversalFirstTimeExperience; // ivar: _showingUniversalFirstTimeExperience




@end


#endif