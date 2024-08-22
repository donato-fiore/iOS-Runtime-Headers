// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSRLEARRAY_H
#define NSRLEARRAY_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying>

 {
    *_NSRefCountedRunArray theList;
}




-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRefCountedRunArray:(struct _NSRefCountedRunArray *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 runIndex:(*NSUInteger)arg2 ;
-(id)objectAtRunIndex:(NSUInteger)arg0 length:(*NSUInteger)arg1 ;
-(void)_makeNewListFrom:(struct _NSRefCountedRunArray *)arg0 ;
-(void)dealloc;


@end


#endif