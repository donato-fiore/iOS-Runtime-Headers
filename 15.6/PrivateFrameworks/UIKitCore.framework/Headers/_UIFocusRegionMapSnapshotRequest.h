// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSREGIONMAPSNAPSHOTREQUEST_H
#define _UIFOCUSREGIONMAPSNAPSHOTREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIFocusSystem.h"
#import "UIView.h"

@interface _UIFocusRegionMapSnapshotRequest : NSObject <NSCopying>



@property (nonatomic) BOOL clipToSnapshotRect; // ivar: _clipToSnapshotRect
@property (nonatomic) NSUInteger focusHeading; // ivar: _focusHeading
@property (retain, nonatomic) UIFocusSystem *focusSystem; // ivar: _focusSystem
@property (weak, nonatomic) UIView *focusableRegionAncestorView; // ivar: _focusableRegionAncestorView
@property (nonatomic) CGRect focusedRect; // ivar: _focusedRect
@property (nonatomic) BOOL includeFocusContainerGuides; // ivar: _includeFocusContainerGuides
@property (nonatomic) BOOL includeFocusGuides; // ivar: _includeFocusGuides
@property (weak, nonatomic) UIView *rootView; // ivar: _rootView
@property (nonatomic) CGRect snapshotRect; // ivar: _snapshotRect
@property (nonatomic) CGRect viewSearchRect; // ivar: _viewSearchRect
@property (nonatomic) CGRect visualRepresentationMinimumArea; // ivar: _visualRepresentationMinimumArea


+(id)requestWithRootView:(id)arg0 focusSystem:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRootView:(id)arg0 focusSystem:(id)arg1 ;
-(id)takeSnapshot;


@end


#endif