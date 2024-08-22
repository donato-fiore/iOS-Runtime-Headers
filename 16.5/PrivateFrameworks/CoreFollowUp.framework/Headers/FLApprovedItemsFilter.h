// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLAPPROVEDITEMSFILTER_H
#define FLAPPROVEDITEMSFILTER_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface FLApprovedItemsFilter : NSObject {
    NSSet *_approvedItemIdentifiers;
    NSSet *_approvedClientIdentifiers;
}




+(id)sharedFilter;
-(BOOL)overrideGroupRestrictionsForItem:(id)arg0 ;
-(NSUInteger)approvalStatusForItem:(id)arg0 ;


@end


#endif