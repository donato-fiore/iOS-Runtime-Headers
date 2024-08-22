// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSDBENUMERATOR_H
#define _LSDBENUMERATOR_H

@protocol NSCopying;


#import "LSEnumerator.h"

@interface _LSDBEnumerator : LSEnumerator <NSCopying>

 {
    Context _context;
    NSUInteger _index;
    id *_lastFastObject;
    BOOL _hasReachedEnd;
    BOOL _hasTriedToPrepare;
    BOOL _hasPrepared;
}




-(BOOL)_getObject:(*id)arg0 atIndex:(NSUInteger)arg1 context:(struct LSContext *)arg2 ;
-(BOOL)_prepareWithContext:(struct LSContext *)arg0 error:(*id)arg1 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)_initWithContext:(struct LSContext *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)nextObject;
-(id)swift_firstWhere:(id)arg0 ;
-(void)swift_forEach:(id)arg0 ;


@end


#endif