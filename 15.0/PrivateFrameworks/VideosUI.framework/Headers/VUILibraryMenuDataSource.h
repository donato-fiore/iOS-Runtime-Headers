// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUILIBRARYMENUDATASOURCE_H
#define VUILIBRARYMENUDATASOURCE_H

@class NSSet;


#import "VUILibraryDataSource.h"
#import "VUIMenuDataSource.h"

@interface VUILibraryMenuDataSource : VUILibraryDataSource

@property (retain, nonatomic) VUIMenuDataSource *menuItems; // ivar: _menuItems
@property (retain, nonatomic) NSSet *validCategories; // ivar: _validCategories


-(id)initWithValidCategories:(id)arg0 ;


@end


#endif