// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYRECIPECLIPMODULEPROVIDER_H
#define PXSTORYRECIPECLIPMODULEPROVIDER_H

@class PFStoryAutoEditConfiguration;

#import <Foundation/Foundation.h>


@interface PXStoryRecipeClipModuleProvider : NSObject

@property (readonly, nonatomic) PFStoryAutoEditConfiguration *configuration; // ivar: _configuration


-(id)_splitEmptySpaceInModules:(id)arg0 maxEmptySpaceLength:(NSUInteger)arg1 momentClipRange:(struct _NSRange )arg2 withClipCatalog:(id)arg3 ;
-(id)computeRunsForModuleType:(NSInteger)arg0 momentClipRange:(struct _NSRange )arg1 withClipCatalog:(id)arg2 maxModuleLength:(NSUInteger)arg3 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)mergeModulesFromRangesByModuleType:(id)arg0 momentClipRange:(struct _NSRange )arg1 ;
-(id)splitRanges:(id)arg0 maxLength:(NSUInteger)arg1 ;
-(void)provideModulesForMomentClipRange:(struct _NSRange )arg0 withClipCatalog:(id)arg1 maxModuleLength:(NSUInteger)arg2 maxEmptySpaceLength:(NSUInteger)arg3 usingBlock:(id)arg4 ;


@end


#endif