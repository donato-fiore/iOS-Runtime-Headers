// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARLAZYDOUBLEARRAY_H
#define _EARLAZYDOUBLEARRAY_H

@class NSArray;



@interface _EARLazyDoubleArray : NSArray {
    vector<double, std::allocator<double>> _vec;
}




-(NSUInteger)count;
-(id)_initWithDoubleVector:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;


@end


#endif