// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUTOOLBARVIEWMODELCHANGE_H
#define PUTOOLBARVIEWMODELCHANGE_H



#import "PUViewModelChange.h"

@interface PUToolbarViewModelChange : PUViewModelChange

@property (nonatomic, setter=_setAccessoryViewChanged:) BOOL accessoryViewChanged; // ivar: _accessoryViewChanged
@property (nonatomic, setter=_setAccessoryViewMaximumHeightChanged:) BOOL accessoryViewMaximumHeightChanged; // ivar: _accessoryViewMaximumHeightChanged
@property (nonatomic, setter=_setAccessoryViewTopOutsetChanged:) BOOL accessoryViewTopOutsetChanged; // ivar: _accessoryViewTopOutsetChanged
@property (nonatomic, setter=_setMaximumHeightChanged:) BOOL maximumHeightChanged; // ivar: _maximumHeightChanged
@property (nonatomic, setter=_setToolbarItemsChanged:) BOOL toolbarItemsChanged; // ivar: _toolbarItemsChanged


-(BOOL)hasChanges;


@end


#endif