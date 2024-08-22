// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTINTEGERKEYDICT_H
#define TSTINTEGERKEYDICT_H


#import <Foundation/Foundation.h>


@interface TSTIntegerKeyDict : NSObject {
    *void mMap;
}




-(NSInteger)count;
-(id)allValues;
-(id)init;
-(id)objectForKey:(unsigned int)arg0 ;
-(void)applyFunction:(*unk)arg0 withState:(*void)arg1 ;
-(void)applyFunction:(*unk)arg0 withState:(*void)arg1 andState:(*void)arg2 ;
-(void)dealloc;
-(void)makeObjectsPerformSelector:(SEL)arg0 ;
-(void)removeAllObjects;
-(void)removeFirstObject;
-(void)removeObjectForKey:(unsigned int)arg0 ;
-(void)setObject:(id)arg0 forKey:(unsigned int)arg1 ;
-(void)transformWithFunction:(*unk)arg0 withState:(*void)arg1 ;


@end


#endif