// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIDESIGNLIBRARYCOMPOSITECATALOG_H
#define CUIDESIGNLIBRARYCOMPOSITECATALOG_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CUIDesignLibraryCompositeCatalog : NSObject {
    NSArray *_catalogs;
}




+(id)_catalogsForDesignSystem:(NSInteger)arg0 colorScheme:(NSInteger)arg1 contrast:(NSInteger)arg2 styling:(NSInteger)arg3 error:(*id)arg4 ;
+(id)compositeCatalogForDesignSystem:(NSInteger)arg0 colorScheme:(NSInteger)arg1 contrast:(NSInteger)arg2 styling:(NSInteger)arg3 error:(*id)arg4 ;
-(id)colorWithName:(NSInteger)arg0 palette:(NSInteger)arg1 displayGamut:(NSInteger)arg2 error:(*id)arg3 ;
-(id)initWithCatalogs:(id)arg0 ;
-(id)shapeEffectPresetWithName:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif