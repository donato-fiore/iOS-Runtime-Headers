// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFITEMMANAGERDELEGATEUPDATEREQUEST_H
#define HFITEMMANAGERDELEGATEUPDATEREQUEST_H


#import <Foundation/Foundation.h>

#import "HFGroupedItemDiff.h"

@interface HFItemManagerDelegateUpdateRequest : NSObject

@property (readonly, copy, nonatomic) id *applyChangesBlock; // ivar: _applyChangesBlock
@property (readonly, nonatomic) HFGroupedItemDiff *changes; // ivar: _changes
@property (readonly, nonatomic) BOOL debug_wasPerformed; // ivar: _debug_wasPerformed
@property (readonly, nonatomic, getter=isInitialUpdate) BOOL initialUpdate; // ivar: _initialUpdate
@property (readonly, copy, nonatomic) id *issueDelegateMessagesBlock; // ivar: _issueDelegateMessagesBlock


-(id)description;
-(id)init;
// -(id)initWithChanges:(id)arg0 isInitialUpdate:(BOOL)arg1 applyChangesBlock:(id)arg2 issueDelegateMessagesBlock:(unk)arg3  ;
-(void)performWithOptions:(NSUInteger)arg0 ;


@end


#endif