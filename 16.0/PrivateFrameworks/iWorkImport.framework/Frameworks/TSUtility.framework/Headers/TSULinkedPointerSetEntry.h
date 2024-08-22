// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSULINKEDPOINTERSETENTRY_H
#define TSULINKEDPOINTERSETENTRY_H


#import <Foundation/Foundation.h>

#import "TSULinkedPointerSetEntry.h"

@interface TSULinkedPointerSetEntry : NSObject {
    id *mObject;
    TSULinkedPointerSetEntry *mPrevious;
    TSULinkedPointerSetEntry *mNext;
}




-(id)initWithObject:(id)arg0 previousEntry:(id)arg1 ;
-(void)dealloc;


@end


#endif