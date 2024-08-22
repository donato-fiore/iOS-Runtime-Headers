// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSHAREDALBUMGADGETDATASOURCEMANAGER_H
#define PXSHAREDALBUMGADGETDATASOURCEMANAGER_H

@class NSArray;


#import "PXGadgetDataSourceManager.h"

@interface PXSharedAlbumGadgetDataSourceManager : PXGadgetDataSourceManager {
    NSArray *_gadgetProviders;
}




-(id)gadgetProviders;
-(id)gadgetSortComparator:(SEL)arg0 ;
-(id)initWithGadgetProviders:(id)arg0 ;


@end


#endif