// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINVALIDATESNAPSHOTCACHESWITCHEREVENTRESPONSE_H
#define SBINVALIDATESNAPSHOTCACHESWITCHEREVENTRESPONSE_H

@class NSArray;


#import "SBSwitcherModifierEventResponse.h"

@interface SBInvalidateSnapshotCacheSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, copy, nonatomic) NSArray *displayItems; // ivar: _displayItems


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithDisplayItems:(id)arg0 ;


@end


#endif