// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGLIST_H
#define SGLIST_H

@class NSMutableArray;
@protocol SGListDelegate;

#import <Foundation/Foundation.h>


@interface SGList : NSObject

@property (retain, nonatomic) NSMutableArray *array; // ivar: _array
@property (copy, nonatomic) id *comparator; // ivar: _comparator
@property (weak, nonatomic) NSObject<SGListDelegate> *delegate; // ivar: _delegate


-(BOOL)addItem:(id)arg0 ;
-(BOOL)removeItem:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)indexOfItem:(id)arg0 ;
-(id)init;
-(id)itemAtIndex:(NSUInteger)arg0 ;
-(id)items;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(void)removeAllItems;


@end


#endif