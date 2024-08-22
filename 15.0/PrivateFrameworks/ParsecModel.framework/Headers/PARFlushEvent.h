// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PARFLUSHEVENT_H
#define PARFLUSHEVENT_H

@protocol NSFetchRequestResult;


#import "PAREvent.h"

@interface PARFlushEvent : PAREvent <NSFetchRequestResult>



@property (nonatomic) int type;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif