// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSURECTLIST_H
#define TSURECTLIST_H


#import <Foundation/Foundation.h>


@interface TSURectList : NSObject {
    vector<CGRect, std::allocator<CGRect>> mRectList;
}


@property (readonly, nonatomic) NSUInteger count;


+(id)rectListWithRect:(struct CGRect )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRect:(struct CGRect )arg0 ;
-(id)initWithRectList:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct CGRect )rectAtIndex:(NSUInteger)arg0 ;


@end


#endif