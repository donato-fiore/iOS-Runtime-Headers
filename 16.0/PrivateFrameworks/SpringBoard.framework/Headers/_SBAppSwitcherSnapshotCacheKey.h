// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBAPPSWITCHERSNAPSHOTCACHEKEY_H
#define _SBAPPSWITCHERSNAPSHOTCACHEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SBAppLayout.h"
#import "SBDisplayItem.h"

@interface _SBAppSwitcherSnapshotCacheKey : NSObject <NSCopying>

 {
    NSUInteger _hash;
}


@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) SBDisplayItem *displayItem; // ivar: _displayItem


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDisplayItem:(id)arg0 inAppLayout:(id)arg1 ;


@end


#endif