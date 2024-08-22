// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKORDEREDDICTIONARY_H
#define CKORDEREDDICTIONARY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CKOrderedDictionary : NSObject {
    NSMutableArray *tuples;
}


@property (readonly, nonatomic) NSUInteger count;


+(id)orderedDictionary;
+(id)orderedDictionaryWithCapacity:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentationRecursive:(BOOL)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)addObject:(id)arg0 forKey:(id)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;


@end


#endif