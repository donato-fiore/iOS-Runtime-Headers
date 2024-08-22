// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMUTABLERLEARRAY_H
#define NSMUTABLERLEARRAY_H



#import "NSRLEArray.h"

@interface NSMutableRLEArray : NSRLEArray



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_setBlockCapacity:(NSUInteger)arg0 ;
-(void)deleteObjectsInRange:(struct _NSRange )arg0 ;
-(void)insertObject:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)replaceObjectsInRange:(struct _NSRange )arg0 withObject:(id)arg1 length:(NSUInteger)arg2 ;


@end


#endif