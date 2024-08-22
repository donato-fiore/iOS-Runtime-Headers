// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXPHOTOSGRIDCONTAINERUIVIEW_H
#define _PXPHOTOSGRIDCONTAINERUIVIEW_H

@class UIView;
@protocol _PXPhotosGridContainerDelegate;



@interface _PXPhotosGridContainerUIView : UIView

@property (weak, nonatomic) NSObject<_PXPhotosGridContainerDelegate> *delegate; // ivar: _delegate


-(void)willMoveToWindow:(id)arg0 ;


@end


#endif