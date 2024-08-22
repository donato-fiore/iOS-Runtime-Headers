// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGFLATTONSDICTIONARYWRAPPERKEYENUMERATOR_H
#define FIGFLATTONSDICTIONARYWRAPPERKEYENUMERATOR_H

@class NSEnumerator;



@interface FigFlatToNSDictionaryWrapperKeyEnumerator : NSEnumerator {
    ? _keys;
    int _keysCount;
    int _counter;
}




-(id)allObjects;
-(id)initWithFlatDictionary:(struct OpaqueFigFlatDictionary *)arg0 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif