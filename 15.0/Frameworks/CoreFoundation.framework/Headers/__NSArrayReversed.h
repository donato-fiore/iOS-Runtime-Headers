// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSARRAYREVERSED_H
#define __NSARRAYREVERSED_H



#import "NSArray.h"

@interface __NSArrayReversed : NSArray {
    id *_array;
    NSUInteger _cnt;
}




-(NSUInteger)count;
-(id)initWithArray:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getObjects:(*id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif