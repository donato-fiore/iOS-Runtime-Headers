// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSTILEGROUPVIEW_VIEWHANDLE_H
#define PKPASSTILEGROUPVIEW_VIEWHANDLE_H


#import <Foundation/Foundation.h>

#import "PKPassTileView.h"

@interface PKPassTileGroupView_ViewHandle : NSObject {
    BOOL _initialLayout;
    PKPassTileView *_view;
    CGSize _size;
}




-(id)init;


@end


#endif