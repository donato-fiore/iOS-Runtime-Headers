// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDDUMMYITEMLAYOUTFACTORY_H
#define PXFEEDDUMMYITEMLAYOUTFACTORY_H

@class NSString;
@protocol PXFeedItemLayoutFactory;

#import <Foundation/Foundation.h>


@interface PXFeedDummyItemLayoutFactory : NSObject <PXFeedItemLayoutFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createLayoutForFeedItemAtIndexPath:(struct PXSimpleIndexPath )arg0 inDataSource:(id)arg1 viewModel:(id)arg2 initialReferenceSize:(struct CGSize )arg3 thumbnailAsset:(*id)arg4 ;


@end


#endif