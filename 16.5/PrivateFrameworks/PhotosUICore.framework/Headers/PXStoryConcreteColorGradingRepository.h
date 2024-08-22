// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONCRETECOLORGRADINGREPOSITORY_H
#define PXSTORYCONCRETECOLORGRADINGREPOSITORY_H

@class NSCache;
@protocol PXStoryColorGradingRepository, OS_os_log;

#import <Foundation/Foundation.h>

#import "PXStoryColorGradingConfiguration.h"

@interface PXStoryConcreteColorGradingRepository : NSObject <PXStoryColorGradingRepository>



@property (readonly, nonatomic) NSCache *colorLookupCubeCache; // ivar: _colorLookupCubeCache
@property (readonly, nonatomic) PXStoryColorGradingConfiguration *configuration;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSUInteger minimumCategoryKindFallbacks;


-(NSInteger)colorGradeKindForColorGradeCategory:(id)arg0 ;
-(NSInteger)colorGradeKindForColorGradeCategory:(id)arg0 excludingKinds:(id)arg1 ;
-(id)_cachedColorLookupCubeForColorGradeKind:(NSInteger)arg0 ;
-(id)_createColorLookupCubeForColorGradeKind:(NSInteger)arg0 ;
-(id)_createCustomColorLookupCubeForResourceName:(id)arg0 ;
-(id)_cubeResourceNameForColorGradeKind:(NSInteger)arg0 ;
-(id)_loadCustomColorLookupCubeForResourceName:(id)arg0 ;
-(id)colorLookupCubeForColorGradeKind:(NSInteger)arg0 ;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)localizedTitleForColorGradeKind:(NSInteger)arg0 ;
-(id)supportedColorGradeKinds;
-(id)supportedUserPickableColorGradeKinds;
-(void)_enumerateSupporedColorGradeCategoriesUsingBlock:(id)arg0 ;
-(void)_writeTemporaryFileWithCompressedColorCube:(id)arg0 forResourceName:(id)arg1 ;
-(void)startPreloadingWithCompletionHandler:(id)arg0 ;


@end


#endif