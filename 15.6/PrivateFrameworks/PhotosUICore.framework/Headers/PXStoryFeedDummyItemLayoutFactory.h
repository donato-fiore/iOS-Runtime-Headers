// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYFEEDDUMMYITEMLAYOUTFACTORY_H
#define PXSTORYFEEDDUMMYITEMLAYOUTFACTORY_H

@class NSString;
@protocol PXStoryFeedItemLayoutFactory;

#import <Foundation/Foundation.h>


@interface PXStoryFeedDummyItemLayoutFactory : NSObject <PXStoryFeedItemLayoutFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createLayoutForFeedItemAtIndexPath:(struct PXSimpleIndexPath )arg0 inDataSource:(id)arg1 viewModel:(id)arg2 initialReferenceSize:(struct CGSize )arg3 thumbnailAsset:(*id)arg4 ;


@end


#endif