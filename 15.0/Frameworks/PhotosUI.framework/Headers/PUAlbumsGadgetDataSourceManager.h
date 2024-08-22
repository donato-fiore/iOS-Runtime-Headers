// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUALBUMSGADGETDATASOURCEMANAGER_H
#define PUALBUMSGADGETDATASOURCEMANAGER_H

@class PXGadgetDataSourceManager, NSArray, PXExtendedTraitCollection;


#import "PUSessionInfo.h"

@interface PUAlbumsGadgetDataSourceManager : PXGadgetDataSourceManager

@property (readonly, nonatomic) NSArray *providers; // ivar: _providers
@property (retain, nonatomic) PUSessionInfo *sessionInfo; // ivar: _sessionInfo
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // ivar: _traitCollection


-(id)gadgetProviders;
-(id)initWithTraitCollection:(id)arg0 sessionInfo:(id)arg1 ;
-(void)removeCachedProviders;


@end


#endif