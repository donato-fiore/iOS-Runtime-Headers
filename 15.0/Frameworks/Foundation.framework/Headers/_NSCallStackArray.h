// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSCALLSTACKARRAY_H
#define _NSCALLSTACKARRAY_H

@class NSArray;



@interface _NSCallStackArray : NSArray {
    **void _frames;
    NSUInteger _cnt;
    NSUInteger _ignore;
    *char * _pcstrs;
    BOOL _wantSyms;
}




+(id)arrayWithFrames:(**void)arg0 count:(NSUInteger)arg1 symbols:(BOOL)arg2 ;
-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithLocale:(id)arg0 indent:(NSUInteger)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif