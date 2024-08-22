// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPSWITCHERSNAPSHOTCACHEENTRY_H
#define SBAPPSWITCHERSNAPSHOTCACHEENTRY_H

@class XBApplicationSnapshot, UIImage;

#import <Foundation/Foundation.h>

#import "SBAppLayout.h"
#import "SBDisplayItem.h"

@interface SBAppSwitcherSnapshotCacheEntry : NSObject

@property (retain, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (retain, nonatomic) SBDisplayItem *displayItem; // ivar: _displayItem
@property (nonatomic) BOOL fromFullSizeSnapshotRequest; // ivar: _fromFullSizeSnapshotRequest
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (readonly, nonatomic) NSInteger role;
@property (retain, nonatomic) XBApplicationSnapshot *snapshot; // ivar: _snapshot
@property (retain, nonatomic) UIImage *snapshotImage; // ivar: _snapshotImage


-(BOOL)_matchesAppLayout:(id)arg0 displayItem:(id)arg1 ;
-(id)description;


@end


#endif