// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTTABLEHEADERSTORAGEBUCKET_H
#define TSTTABLEHEADERSTORAGEBUCKET_H

@class NSString;
@protocol TSTTableHeaderStorage;


#import "TSPObject.h"

@interface TSTTableHeaderStorageBucket : TSPObject <TSTTableHeaderStorage>

 {
    *void mMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalScaleFactor; // ivar: mHorizontalScaleFactor
@property (readonly) Class superclass;


-(NSInteger)count;
-(NSUInteger)flushableSize;
-(id)headerForKey:(unsigned int)arg0 willModify:(BOOL)arg1 ;
-(id)headerForKey:(unsigned int)arg0 willModify:(BOOL)arg1 createIfNotThere:(BOOL)arg2 ;
-(id)initWithContext:(id)arg0 ;
-(id)packageLocator;
-(unsigned int)lowerBound:(unsigned int)arg0 ;
-(unsigned int)maxKey;
-(unsigned int)minKey;
-(unsigned int)upperBound:(unsigned int)arg0 ;
-(void)applyFunction:(*unk)arg0 withState:(*void)arg1 willModify:(BOOL)arg2 ;
-(void)dealloc;
-(void)makeHeadersPerformSelector:(SEL)arg0 willModify:(BOOL)arg1 ;
-(void)removeAllHeaders;
-(void)removeHeaderForKey:(unsigned int)arg0 ;
-(void)setHeader:(id)arg0 forKey:(unsigned int)arg1 ;
-(void)shiftKeysAtIndex:(unsigned int)arg0 amount:(int)arg1 ;


@end


#endif