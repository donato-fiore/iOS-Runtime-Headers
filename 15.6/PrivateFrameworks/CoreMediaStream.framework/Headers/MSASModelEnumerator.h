// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSASMODELENUMERATOR_H
#define MSASMODELENUMERATOR_H

@class NSEnumerator;
@protocol OS_dispatch_queue;



@interface MSASModelEnumerator : NSEnumerator

@property (nonatomic) *sqlite3 db; // ivar: _db
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) id *stepBlock; // ivar: _stepBlock
@property (nonatomic) *sqlite3_stmt stmt; // ivar: _stmt


+(id)enumeratorWithDatabase:(struct sqlite3 *)arg0 query:(id)arg1 stepBlock:(id)arg2 ;
-(id)init;
-(id)initWithDatabase:(struct sqlite3 *)arg0 query:(id)arg1 stepBlock:(id)arg2 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif