// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WPDPENDINGCOMPLETIONS_H
#define WPDPENDINGCOMPLETIONS_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface WPDPendingCompletions : NSObject

@property NSUInteger lastID; // ivar: _lastID
@property (retain) NSString *name; // ivar: _name
@property (retain) NSMutableArray *pendingCompletions; // ivar: _pendingCompletions


-(NSUInteger)addCompletion:(id)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 ;
-(void)completeID:(NSUInteger)arg0 success:(BOOL)arg1 ;


@end


#endif