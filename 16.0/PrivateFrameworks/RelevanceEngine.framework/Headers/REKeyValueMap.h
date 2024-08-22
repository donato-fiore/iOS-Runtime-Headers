// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REKEYVALUEMAP_H
#define REKEYVALUEMAP_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface REKeyValueMap : NSObject {
    NSMapTable *_keyMap;
    NSMapTable *_valueMap;
}


@property (readonly, nonatomic) NSUInteger count;


-(NSUInteger)valueCount;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)keyForValue:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)addKey:(id)arg0 withValue:(id)arg1 ;
-(void)removeKey:(id)arg0 ;


@end


#endif