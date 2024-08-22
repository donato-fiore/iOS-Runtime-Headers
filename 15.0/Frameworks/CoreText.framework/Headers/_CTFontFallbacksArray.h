// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CTFONTFALLBACKSARRAY_H
#define _CTFONTFALLBACKSARRAY_H

@class NSArray, NSMutableArray;



@interface _CTFontFallbacksArray : NSArray {
    TUnfairLock _lock;
    *void _baseFont;
    *TTraitsValues _refTraits;
    NSUInteger _count;
    NSMutableArray *_cascade;
    NSMutableArray *_fallbacks;
    NSUInteger _hash;
    int _uiUse;
}




-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif