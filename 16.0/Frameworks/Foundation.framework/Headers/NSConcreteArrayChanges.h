// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCONCRETEARRAYCHANGES_H
#define NSCONCRETEARRAYCHANGES_H



#import "NSArrayChanges.h"

@interface NSConcreteArrayChanges : NSArrayChanges {
    ? _changes;
}




-(NSUInteger)changeCount;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithObjects:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)_enumerateChanges:(NSUInteger)arg0 stop:(*BOOL)arg1 usingBlock:(id)arg2 ;
-(void)addChange:(id)arg0 ;
-(void)applyChangesToArray:(id)arg0 ;
-(void)dealloc;
-(void)enumerateChanges:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateChangesUsingBlock:(id)arg0 ;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;
-(void)sortRange:(struct _NSRange )arg0 options:(NSUInteger)arg1 usingComparator:(id)arg2 ;


@end


#endif