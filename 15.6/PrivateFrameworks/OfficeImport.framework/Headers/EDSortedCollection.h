// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDSORTEDCOLLECTION_H
#define EDSORTEDCOLLECTION_H



#import "EDKeyedCollection.h"

@interface EDSortedCollection : EDKeyedCollection



-(NSUInteger)addObject:(id)arg0 ;
-(NSUInteger)addObject:(id)arg0 overrideDuplicate:(BOOL)arg1 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;


@end


#endif