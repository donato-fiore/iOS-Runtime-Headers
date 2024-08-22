// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLACCOUNTINGEVENTENTRY_H
#define PLACCOUNTINGEVENTENTRY_H

@class PLEntry;


#import "PLAccountingRange.h"

@interface PLAccountingEventEntry : PLEntry

@property (readonly, nonatomic) int instanceDirectionality;
@property (retain, nonatomic) PLAccountingRange *range; // ivar: _range
@property (nonatomic) BOOL used; // ivar: _used


+(int)classDirectionality;
-(BOOL)canMergeWithEvent:(id)arg0 ;
-(BOOL)isEmptyEvent;
-(BOOL)isEqualContentsWithEvent:(id)arg0 ;
-(id)initWithRange:(id)arg0 ;
-(id)rangeSinceEvent:(id)arg0 ;
-(void)mergeWithEvent:(id)arg0 ;


@end


#endif