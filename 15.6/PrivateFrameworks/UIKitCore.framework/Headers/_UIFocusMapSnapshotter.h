// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSMAPSNAPSHOTTER_H
#define _UIFOCUSMAPSNAPSHOTTER_H

@protocol UICoordinateSpace, _UIFocusRegionContainer;

#import <Foundation/Foundation.h>

#import "_UIFocusRegionContentAttributes.h"
#import "UIFocusSystem.h"
#import "_UIFocusRegion.h"
#import "_UIFocusSearchInfo.h"

@interface _UIFocusMapSnapshotter : NSObject {
    BOOL _snapshotFrameIsEmpty;
}


@property (nonatomic) BOOL clipToSnapshotRect; // ivar: _clipToSnapshotRect
@property (readonly, copy, nonatomic) _UIFocusRegionContentAttributes *contentAttributes; // ivar: _contentAttributes
@property (readonly, weak, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace; // ivar: _coordinateSpace
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem; // ivar: _focusSystem
@property (retain, nonatomic) _UIFocusRegion *focusedRegion; // ivar: _focusedRegion
@property (nonatomic) BOOL ignoresRootContainerClippingRect; // ivar: _ignoresRootContainerClippingRect
@property (weak, nonatomic) NSObject<_UIFocusRegionContainer> *regionsContainer; // ivar: _regionsContainer
@property (readonly, weak, nonatomic) NSObject<_UIFocusRegionContainer> *rootContainer; // ivar: _rootContainer
@property (retain, nonatomic) _UIFocusSearchInfo *searchInfo; // ivar: _searchInfo
@property (nonatomic) CGRect snapshotFrame; // ivar: _snapshotFrame


-(id)_searchAreaForContainerSearchRect:(struct CGRect )arg0 ;
-(id)captureSnapshot;
-(id)init;
-(id)initWithFocusSystem:(id)arg0 rootContainer:(id)arg1 coordinateSpace:(id)arg2 searchInfo:(id)arg3 ignoresRootContainerClippingRect:(BOOL)arg4 ;


@end


#endif