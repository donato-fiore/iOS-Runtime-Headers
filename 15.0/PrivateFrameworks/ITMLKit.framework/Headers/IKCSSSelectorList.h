// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKCSSSELECTORLIST_H
#define IKCSSSELECTORLIST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "IKMutableArray.h"

@interface IKCSSSelectorList : NSObject <NSCopying>



@property (readonly, nonatomic) IKMutableArray *selectors; // ivar: _selectors


-(NSUInteger)count;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)firstSelector;
-(id)init;
-(id)lastSelector;
-(id)selectorAtIndex:(NSUInteger)arg0 ;
-(void)addSelector:(id)arg0 ;


@end


#endif