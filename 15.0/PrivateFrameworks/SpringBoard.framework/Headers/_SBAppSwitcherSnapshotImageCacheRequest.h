// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBAPPSWITCHERSNAPSHOTIMAGECACHEREQUEST_H
#define _SBAPPSWITCHERSNAPSHOTIMAGECACHEREQUEST_H

@class XBApplicationSnapshot;

#import <Foundation/Foundation.h>

#import "SBAppLayout.h"
#import "SBDisplayItem.h"

@interface _SBAppSwitcherSnapshotImageCacheRequest : NSObject

@property (retain, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (retain, nonatomic) SBDisplayItem *displayItem; // ivar: _displayItem
@property (nonatomic) BOOL loadFullSizeSnapshot; // ivar: _loadFullSizeSnapshot
@property (readonly, nonatomic) NSUInteger sequenceID; // ivar: _sequenceID
@property (retain, nonatomic) XBApplicationSnapshot *snapshot; // ivar: _snapshot


-(id)description;
-(id)initWithSequenceID:(NSUInteger)arg0 ;


@end


#endif