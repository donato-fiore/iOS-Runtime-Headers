// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLACCOUNTINGQUALIFICATIONEVENTENTRY_H
#define PLACCOUNTINGQUALIFICATIONEVENTENTRY_H

@class NSSet, NSNumber;


#import "PLAccountingEventEntry.h"

@interface PLAccountingQualificationEventEntry : PLAccountingEventEntry

@property (readonly, nonatomic) NSSet *childNodeIDs; // ivar: _childNodeIDs
@property (readonly, nonatomic) NSSet *childNodeNames;
@property (readonly, nonatomic) NSNumber *qualificationID;


+(void)load;
-(BOOL)isEmptyEvent;
-(BOOL)isEqualContentsWithEvent:(id)arg0 ;
-(id)initWithQualificationID:(id)arg0 withChildNodeIDs:(id)arg1 withRange:(id)arg2 ;
-(id)initWithQualificationID:(id)arg0 withChildNodeNames:(id)arg1 withRange:(id)arg2 ;
-(id)subEntryKey;
-(int)instanceDirectionality;


@end


#endif