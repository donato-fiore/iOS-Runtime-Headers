// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OITSURANGELIST_H
#define OITSURANGELIST_H


#import <Foundation/Foundation.h>


@interface OITSURangeList : NSObject {
    vector<_NSRange, std::allocator<_NSRange>> mRangeList;
}


@property (readonly, nonatomic) NSUInteger count;


-(id)initWithRange:(struct _NSRange )arg0 ;
-(id)initWithRangeList:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)stringValue;
-(struct _NSRange )rangeAtIndex:(NSUInteger)arg0 ;
-(void)addRange:(struct _NSRange )arg0 ;
-(void)consolidate;
-(void)insertRange:(struct _NSRange )arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeRangeAtIndex:(NSUInteger)arg0 ;
-(void)replaceWithRange:(struct _NSRange )arg0 atIndex:(NSUInteger)arg1 ;
-(void)reverse;


@end


#endif