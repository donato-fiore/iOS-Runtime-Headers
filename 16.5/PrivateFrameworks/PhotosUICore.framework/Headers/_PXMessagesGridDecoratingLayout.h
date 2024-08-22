// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXMESSAGESGRIDDECORATINGLAYOUT_H
#define _PXMESSAGESGRIDDECORATINGLAYOUT_H

@class NSString;
@protocol PXPhotosSectionedLayoutBody;


#import "PXGDecoratingLayout.h"
#import "PXPhotosGridMessagesBodyLayout.h"

@interface _PXMessagesGridDecoratingLayout : PXGDecoratingLayout <PXPhotosSectionedLayoutBody>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXPhotosGridMessagesBodyLayout *decoratedLayout;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif