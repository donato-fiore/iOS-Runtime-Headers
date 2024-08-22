// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCOLLECTIONLAYOUTMANAGER_H
#define HUCOLLECTIONLAYOUTMANAGER_H


#import <Foundation/Foundation.h>


@interface HUCollectionLayoutManager : NSObject {
    ? delegate;
    ? layoutOptions;
}




+(id)defaultProminentInsetGroupedHeader;
+(struct HUGridSize )gridSizeForItem:(id)arg0 ;
-(id)buildAdaptiveTileSectionFor:(id)arg0 layoutEnvironment:(id)arg1 ;
-(id)init;
-(void)registerSectionDecorationViewsWithLayout:(id)arg0 ;


@end


#endif