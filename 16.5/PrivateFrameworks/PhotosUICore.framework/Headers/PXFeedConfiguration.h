// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDCONFIGURATION_H
#define PXFEEDCONFIGURATION_H

@class NSString;
@protocol NSCopying, PXFeedActionPerformer, PXFeedItemLayoutFactory, PXFeedPlaceholderFactory;

#import <Foundation/Foundation.h>

#import "PXFeedHorizontalGadgetViewLayoutSpecManager.h"
#import "PXGadgetSpec.h"
#import "PXMediaProvider.h"

@interface PXFeedConfiguration : NSObject <NSCopying>

 {
    PXFeedHorizontalGadgetViewLayoutSpecManager *_gadgetViewLayoutSpecManager;
}


@property (retain, nonatomic) NSObject<PXFeedActionPerformer> *actionPerformer; // ivar: _actionPerformer
@property (readonly, nonatomic) BOOL allowsPopOnEmptyBehavior;
@property (copy, nonatomic) id *chromeControllerPromise; // ivar: _chromeControllerPromise
@property (copy, nonatomic) id *dataSourceManagerPromise; // ivar: _dataSourceManagerPromise
@property (readonly, nonatomic) NSString *gadgetAccessoryButtonLocalizedTitle;
@property (readonly, nonatomic) NSUInteger gadgetAccessoryButtonType;
@property (readonly, nonatomic) NSString *gadgetLocalizedTitle;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly, nonatomic) NSInteger horizontalGadgetStyle;
@property (retain, nonatomic) NSObject<PXFeedItemLayoutFactory> *itemLayoutFactory; // ivar: _itemLayoutFactory
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (retain, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (retain, nonatomic) NSObject<PXFeedPlaceholderFactory> *placeholderFactory; // ivar: _placeholderFactory
@property (nonatomic) BOOL shouldEmbedContentLayout; // ivar: _shouldEmbedContentLayout
@property (copy, nonatomic) id *specManagerPromise; // ivar: _specManagerPromise
@property (readonly, nonatomic) NSString *viewControllerTitle;
@property (copy, nonatomic) id *visibleRectChangeObserver; // ivar: _visibleRectChangeObserver
@property (readonly, nonatomic) BOOL wantsEmbeddedScrollView;
@property (readonly, nonatomic) BOOL wantsMultilineGadgetTitle;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createSeeAllViewController;
-(id)dataSourceManager;
-(id)horizontalGadgetViewSpecManagerWithExtendedTraitCollection:(id)arg0 ;
-(id)init;
// -(id)initWithDataSourceManagerPromise:(id)arg0 specManagerPromise:(unk)arg1 itemLayoutFactory:(id)arg2  ;
-(id)objectReferenceForDestination:(id)arg0 ;
-(id)specManagerWithExtendedTraitCollection:(id)arg0 ;
-(void)handleContentDismissed;
-(void)handleContentSeen;


@end


#endif