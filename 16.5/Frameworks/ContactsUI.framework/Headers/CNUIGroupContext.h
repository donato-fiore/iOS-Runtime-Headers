// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIGROUPCONTEXT_H
#define CNUIGROUPCONTEXT_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface CNUIGroupContext : NSObject

@property (readonly, nonatomic) NSDictionary *addedGroupsByContainerDict; // ivar: _addedGroupsByContainerDict
@property (readonly, nonatomic) NSArray *removedGroups; // ivar: _removedGroups


-(id)initWithAddedGroupsByContainerDict:(id)arg0 removedGroups:(id)arg1 ;


@end


#endif