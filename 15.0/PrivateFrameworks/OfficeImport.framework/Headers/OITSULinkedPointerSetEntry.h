// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSULINKEDPOINTERSETENTRY_H
#define OITSULINKEDPOINTERSETENTRY_H


#import <Foundation/Foundation.h>

#import "OITSULinkedPointerSetEntry.h"

@interface OITSULinkedPointerSetEntry : NSObject {
    id *mObject;
    OITSULinkedPointerSetEntry *mPrevious;
    OITSULinkedPointerSetEntry *mNext;
}




-(id)initWithObject:(id)arg0 previousEntry:(id)arg1 ;
-(void)dealloc;


@end


#endif