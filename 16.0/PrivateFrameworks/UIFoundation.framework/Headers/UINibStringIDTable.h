// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UINIBSTRINGIDTABLE_H
#define UINIBSTRINGIDTABLE_H


#import <Foundation/Foundation.h>


@interface UINibStringIDTable : NSObject {
    **UIStringIDTableBucket table;
    *UIStringIDTableBucket buckets;
    NSUInteger hashMask;
    NSUInteger count;
}




-(BOOL)lookupKey:(id)arg0 identifier:(*NSInteger)arg1 ;
-(NSInteger)count;
-(id)initWithKeysTransferingOwnership:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif