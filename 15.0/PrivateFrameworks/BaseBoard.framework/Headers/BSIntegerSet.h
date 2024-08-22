// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSINTEGERSET_H
#define BSINTEGERSET_H

@class NSHashTable;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface BSIntegerSet : NSObject <NSCopying, NSMutableCopying>

 {
    NSHashTable *_hashTable;
    BOOL _hasZeroValue;
}


@property (readonly, nonatomic) NSUInteger count;


-(BOOL)containsValue:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)enumerateWithBlock:(id)arg0 ;


@end


#endif