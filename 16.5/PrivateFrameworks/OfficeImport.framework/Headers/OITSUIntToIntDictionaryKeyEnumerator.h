// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OITSUINTTOINTDICTIONARYKEYENUMERATOR_H
#define OITSUINTTOINTDICTIONARYKEYENUMERATOR_H


#import <Foundation/Foundation.h>


@interface OITSUIntToIntDictionaryKeyEnumerator : NSObject {
    **NSInteger _keys;
    NSUInteger _count;
    NSUInteger _index;
}




-(NSInteger)nextKey;
-(id)initWithIntegerKeyDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif