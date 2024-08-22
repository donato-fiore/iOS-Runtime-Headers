// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYFEEDCONFIGURATION_H
#define PXSTORYFEEDCONFIGURATION_H

@class NSString;
@protocol NSCopying, PXStoryFeedActionPerformer, PXStoryFeedItemLayoutFactory;

#import <Foundation/Foundation.h>

#import "PXStoryHorizontalGadgetViewLayoutSpecManager.h"
#import "PXGadgetSpec.h"
#import "PXMediaProvider.h"

@interface PXStoryFeedConfiguration : NSObject <NSCopying>

 {
    PXStoryHorizontalGadgetViewLayoutSpecManager *_gadgetViewLayoutSpecManager;
}


@property (retain, nonatomic) NSObject<PXStoryFeedActionPerformer> *actionPerformer; // ivar: _actionPerformer
@property (copy, nonatomic) id *chromeControllerPromise; // ivar: _chromeControllerPromise
@property (copy, nonatomic) id *dataSourceManagerPromise; // ivar: _dataSourceManagerPromise
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (retain, nonatomic) NSObject<PXStoryFeedItemLayoutFactory> *itemLayoutFactory; // ivar: _itemLayoutFactory
@property (retain, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (nonatomic) BOOL shouldEmbedContentLayout; // ivar: _shouldEmbedContentLayout
@property (copy, nonatomic) id *specManagerPromise; // ivar: _specManagerPromise
@property (readonly, nonatomic) NSString *viewControllerTitle; // ivar: _viewControllerTitle


-(id)copyForFullFeed;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataSourceManager;
-(id)fullFeedViewController;
-(id)horizontalGadgetViewSpecManagerWithExtendedTraitCollection:(id)arg0 ;
-(id)init;
// -(id)initWithDataSourceManagerPromise:(id)arg0 specManagerPromise:(unk)arg1 itemLayoutFactory:(id)arg2  ;
-(id)objectReferenceForDestination:(id)arg0 ;
-(id)specManagerWithExtendedTraitCollection:(id)arg0 ;
-(void)handleContentSeen;


@end


#endif