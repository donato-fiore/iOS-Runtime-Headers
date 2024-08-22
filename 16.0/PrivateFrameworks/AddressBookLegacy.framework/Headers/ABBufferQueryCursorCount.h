// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABBUFFERQUERYCURSORCOUNT_H
#define ABBUFFERQUERYCURSORCOUNT_H


#import <Foundation/Foundation.h>

#import "ABBufferQueryCount.h"

@interface ABBufferQueryCursorCount : NSObject

@property (readonly, nonatomic) ABBufferQueryCount *query; // ivar: _query


-(NSInteger)fetchContactCount;
-(id)initWithAddressBook:(*void)arg0 predicate:(id)arg1 includeLinkedContacts:(BOOL)arg2 managedConfiguration:(id)arg3 ;
-(id)initWithQuery:(id)arg0 ;
-(void)dealloc;


@end


#endif