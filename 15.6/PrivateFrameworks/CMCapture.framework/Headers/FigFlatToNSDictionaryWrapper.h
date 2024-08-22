// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGFLATTONSDICTIONARYWRAPPER_H
#define FIGFLATTONSDICTIONARYWRAPPER_H

@class NSDictionary;



@interface FigFlatToNSDictionaryWrapper : NSDictionary {
    *OpaqueFigFlatDictionary _flatDictionary;
    *OpaqueFigFlatDictionaryKeySpec _keySpec;
    int _keySpace;
    *void _dictionaryBacking;
    *void _exportedKeySpec;
    id *_deallocatorBlock;
    os_unfair_lock_s _lazyInitializationMutex;
}




-(NSUInteger)count;
-(id)initLazilyWithFlatDictionaryBacking:(*void)arg0 exportedKeySpec:(*void)arg1 deallocatorBlock:(id)arg2 ;
-(id)initWithFlatDictionary:(struct OpaqueFigFlatDictionary *)arg0 keySpec:(struct OpaqueFigFlatDictionaryKeySpec *)arg1 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;


@end


#endif