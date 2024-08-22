// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLEHEADERSTORAGEBUCKET_H
#define TSTTABLEHEADERSTORAGEBUCKET_H

@class TSPObject, TSUSparseArray, NSIndexSet;



@interface TSTTableHeaderStorageBucket : TSPObject

@property (nonatomic) _NSRange bounds; // ivar: _bounds
@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) TSUSparseArray *data; // ivar: _data
@property (readonly, nonatomic) unsigned int maxIndex;
@property (readonly, nonatomic) unsigned int minIndex;
@property (readonly, nonatomic) NSIndexSet *populatedIndexes;


-(id)headerAtIndex:(unsigned int)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 bounds:(struct _NSRange )arg1 ;
-(id)mutableHeaderAtIndex:(unsigned int)arg0 allowCreation:(BOOL)arg1 ;
-(id)packageLocator;
-(id)shiftIndexesBackAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(id)shiftIndexesForwardAtIndex:(unsigned int)arg0 count:(unsigned int)arg1 ;
-(void)enumerateHeadersWithBlock:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)reset;
-(void)saveToArchiver:(id)arg0 ;
-(void)setHeader:(id)arg0 atIndex:(unsigned int)arg1 ;
-(void)setHeaders:(id)arg0 ;


@end


#endif