// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSURECTLIST_H
#define OITSURECTLIST_H


#import <Foundation/Foundation.h>


@interface OITSURectList : NSObject {
    vector<CGRect, std::allocator<CGRect>> mRectList;
}


@property (readonly, nonatomic) NSUInteger count;


+(id)rectListWithDifference:(struct CGRect )arg0 withRect:(struct CGRect )arg1 ;
-(id)initWithRect:(struct CGRect )arg0 ;
-(id)initWithRectList:(id)arg0 ;
-(struct CGRect )rectAtIndex:(NSUInteger)arg0 ;
-(void)addRect:(struct CGRect )arg0 ;
-(void)insertRect:(struct CGRect )arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif