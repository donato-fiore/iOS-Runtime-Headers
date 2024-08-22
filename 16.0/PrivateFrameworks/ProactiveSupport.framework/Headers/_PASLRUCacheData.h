// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PASLRUCACHEDATA_H
#define _PASLRUCACHEDATA_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _PASLRUCacheData : NSObject {
    NSMutableDictionary *items;
    NSMutableArray *keysMRU;
}




-(id)initWithCountLimit:(NSUInteger)arg0 ;


@end


#endif