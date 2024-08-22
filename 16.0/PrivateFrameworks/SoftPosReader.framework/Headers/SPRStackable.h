// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPRSTACKABLE_H
#define SPRSTACKABLE_H



#import "SPRObject.h"

@interface SPRStackable : SPRObject



-(BOOL)clear:(*id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)pushWithValue:(id)arg0 error:(*id)arg1 ;
-(NSInteger)count;
-(NSInteger)searchWithValue:(id)arg0 ;
-(id)peek:(*id)arg0 ;
-(id)peekAll:(*id)arg0 ;
-(id)pop:(*id)arg0 ;


@end


#endif