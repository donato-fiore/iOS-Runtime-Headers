// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DORDEREDDICTIONARY_H
#define TSCH3DORDEREDDICTIONARY_H

@class NSMutableDictionary, NSMutableArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface TSCH3DOrderedDictionary : NSObject <NSFastEnumeration>

 {
    NSMutableDictionary *_store;
    NSMutableArray *_keyOrder;
}


@property (readonly, nonatomic) NSUInteger count;


+(id)dictionary;
+(id)dictionaryWithMutableDictionaryStore:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)description;
-(id)init;
-(id)initWithMutableDictionaryStore:(id)arg0 ;
-(id)lastKey;
-(id)lastObject;
-(id)objectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif