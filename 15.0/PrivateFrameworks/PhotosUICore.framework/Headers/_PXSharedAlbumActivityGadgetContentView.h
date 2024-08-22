// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXSHAREDALBUMACTIVITYGADGETCONTENTVIEW_H
#define _PXSHAREDALBUMACTIVITYGADGETCONTENTVIEW_H

@class UIView, NSString;
@protocol PXFocusInfoProvider;


#import "PXFocusInfo.h"

@interface _PXSharedAlbumActivityGadgetContentView : UIView <PXFocusInfoProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXFocusInfo *focusInfo; // ivar: _focusInfo
@property (copy, nonatomic) id *focusInfoChangeHandler; // ivar: _focusInfoChangeHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *layoutSubviewsHandler; // ivar: _layoutSubviewsHandler
@property (readonly) Class superclass;


-(void)layoutSubviews;


@end


#endif