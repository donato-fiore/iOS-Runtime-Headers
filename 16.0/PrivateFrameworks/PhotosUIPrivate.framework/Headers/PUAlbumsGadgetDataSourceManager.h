// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUALBUMSGADGETDATASOURCEMANAGER_H
#define PUALBUMSGADGETDATASOURCEMANAGER_H

@class PXGadgetDataSourceManager, NSString, NSArray, PXExtendedTraitCollection;
@protocol PXChangeObserver;


#import "PUSessionInfo.h"

@interface PUAlbumsGadgetDataSourceManager : PXGadgetDataSourceManager <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *providers; // ivar: _providers
@property (retain, nonatomic) PUSessionInfo *sessionInfo; // ivar: _sessionInfo
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // ivar: _traitCollection


-(id)gadgetProviders;
-(id)initWithTraitCollection:(id)arg0 sessionInfo:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)removeCachedProviders;


@end


#endif