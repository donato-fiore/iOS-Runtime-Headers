// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYSHARINGSUGGESTIONSFEEDITEMLAYOUTFACTORY_H
#define PXSHAREDLIBRARYSHARINGSUGGESTIONSFEEDITEMLAYOUTFACTORY_H

@class NSString;
@protocol PXFeedItemLayoutFactory;

#import <Foundation/Foundation.h>


@interface PXSharedLibrarySharingSuggestionsFeedItemLayoutFactory : NSObject <PXFeedItemLayoutFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createLayoutForFeedItemAtIndexPath:(struct PXSimpleIndexPath )arg0 inDataSource:(id)arg1 viewModel:(id)arg2 initialReferenceSize:(struct CGSize )arg3 thumbnailAsset:(*id)arg4 ;
-(void)_configureLayout:(id)arg0 indexPath:(struct PXSimpleIndexPath )arg1 inDataSource:(id)arg2 ;
-(void)configureItemLayout:(id)arg0 forChangedItemFromIndexPath:(struct PXSimpleIndexPath )arg1 inDataSource:(id)arg2 toIndexPath:(struct PXSimpleIndexPath )arg3 inDataSource:(id)arg4 ;


@end


#endif