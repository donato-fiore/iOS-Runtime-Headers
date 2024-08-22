// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSMUTABLESIGNALPACK_H
#define MAPSSUGGESTIONSMUTABLESIGNALPACK_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;


#import "MapsSuggestionsSignalPack.h"

@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack <NSCopying, NSMutableCopying, NSSecureCoding>





-(BOOL)addFromEntry:(id)arg0 ;
-(BOOL)addFromMapItem:(id)arg0 ;
-(BOOL)removeSignalType:(NSInteger)arg0 ;
-(BOOL)writeSignalValue:(float)arg0 forType:(NSInteger)arg1 ;
-(BOOL)writeSignalValue:(float)arg0 forType:(NSInteger)arg1 gathered:(id)arg2 ;
-(BOOL)writeSignalValue:(float)arg0 forType:(NSInteger)arg1 gathered:(id)arg2 expires:(id)arg3 ;
-(id)copy;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)removeAll;


@end


#endif