// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUILIBRARYMEDIACOLLECTIONVIEWMODEL_H
#define VUILIBRARYMEDIACOLLECTIONVIEWMODEL_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface VUILibraryMediaCollectionViewModel : NSObject

@property (retain, nonatomic) NSDictionary *episodeShelfViewControllerBySeasonIdentifier; // ivar: _episodeShelfViewControllerBySeasonIdentifier
@property (retain, nonatomic) NSDictionary *episodesBySeasonIdentifer; // ivar: _episodesBySeasonIdentifer
@property (readonly, nonatomic) BOOL hasContent;
@property (retain, nonatomic) NSDictionary *productLockupViewBySeasonIdentifier; // ivar: _productLockupViewBySeasonIdentifier
@property (retain, nonatomic) NSDictionary *seasonBySeasonIdentifier; // ivar: _seasonBySeasonIdentifier
@property (retain, nonatomic) NSArray *seasonViewModels; // ivar: _seasonViewModels




@end


#endif