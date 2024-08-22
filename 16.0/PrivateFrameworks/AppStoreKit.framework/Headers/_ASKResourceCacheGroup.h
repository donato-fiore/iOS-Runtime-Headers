// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ASKRESOURCECACHEGROUP_H
#define _ASKRESOURCECACHEGROUP_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _ASKResourceCacheGroup : NSObject {
    NSMutableArray *_memberContents;
    os_unfair_lock_s _guard;
}


@property BOOL hasMultipleMembers; // ivar: _hasMultipleMembers


-(id)init;
-(id)makeMemberContents;
-(id)onlyMemberContents;
-(id)snapshotMemberContents;
-(void)discardMemberContents:(id)arg0 ;


@end


#endif