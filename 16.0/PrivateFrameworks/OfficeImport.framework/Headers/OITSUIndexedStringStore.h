// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OITSUINDEXEDSTRINGSTORE_H
#define OITSUINDEXEDSTRINGSTORE_H

@class NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface OITSUIndexedStringStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_indexByString;
    NSMutableArray *_stringByIndex;
}




-(NSUInteger)count;
-(NSUInteger)indexForString:(id)arg0 ;
-(id)init;
-(id)stringForIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif