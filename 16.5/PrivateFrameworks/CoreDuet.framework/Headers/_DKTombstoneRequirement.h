// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKTOMBSTONEREQUIREMENT_H
#define _DKTOMBSTONEREQUIREMENT_H

@class NSPredicate, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _DKTombstoneRequirement : NSObject

@property (readonly) NSPredicate *eventPredicate;
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSPredicate *predicate;
@property (readonly) NSArray *propertiesToFetch;


+(id)requirement;
-(void)assignPropertiesToTombstone:(id)arg0 extractedFromEvent:(id)arg1 ;
-(void)assignPropertiesToTombstone:(id)arg0 extractedFromPartialEvent:(id)arg1 ;


@end


#endif