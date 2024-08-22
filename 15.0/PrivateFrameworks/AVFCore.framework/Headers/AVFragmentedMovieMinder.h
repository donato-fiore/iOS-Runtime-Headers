// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVFRAGMENTEDMOVIEMINDER_H
#define AVFRAGMENTEDMOVIEMINDER_H

@class NSArray;


#import "AVFragmentedAssetMinder.h"

@interface AVFragmentedMovieMinder : AVFragmentedAssetMinder

@property (nonatomic) CGFloat mindingInterval;
@property (readonly, nonatomic) NSArray *movies;


+(id)fragmentedMovieMinderWithMovie:(id)arg0 mindingInterval:(CGFloat)arg1 ;
-(BOOL)_throwsWhenAlreadyMindedAssetIsAdded;
-(id)initWithMovie:(id)arg0 mindingInterval:(CGFloat)arg1 ;
-(void)addFragmentedMovie:(id)arg0 ;
-(void)removeFragmentedMovie:(id)arg0 ;


@end


#endif