// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSINTEGERMAP_H
#define BSINTEGERMAP_H

@class NSMapTable;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface BSIntegerMap : NSObject <NSCopying, NSMutableCopying>

 {
    NSMapTable *_mapTable;
    id *_zeroIndexValue;
}


@property (readonly, nonatomic) NSUInteger count;


-(BOOL)containsObjectForKey:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)allKeys;
-(id)allValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectForKey:(NSInteger)arg0 ;
-(void)enumerateKeysWithBlock:(id)arg0 ;
-(void)enumerateWithBlock:(id)arg0 ;


@end


#endif