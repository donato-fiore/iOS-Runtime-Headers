// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _REACTIONVALUE_H
#define _REACTIONVALUE_H

@class NSMutableSet, NSSet;

#import <Foundation/Foundation.h>

#import "REDonatedAction.h"

@interface _REActionValue : NSObject {
    NSMutableSet *_mutableUUIDs;
}


@property (readonly, nonatomic) REDonatedAction *action; // ivar: _action
@property (readonly, nonatomic) NSSet *uuids;


-(id)initWithAction:(id)arg0 ;
-(void)addAction:(id)arg0 ;
-(void)removeActionWithUUID:(id)arg0 ;


@end


#endif