// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GSPERMANENTADDITIONENUMERATOR_H
#define GSPERMANENTADDITIONENUMERATOR_H

@class NSEnumerator, NSString, NSArray, NSError;
@protocol GSAdditionEnumerating;


#import "GSPermanentStorage.h"
#import "GSDaemonProxySync.h"

@interface GSPermanentAdditionEnumerator : NSEnumerator <GSAdditionEnumerating>

 {
    GSPermanentStorage *_storage;
    NSString *_nameSpace;
    NSUInteger _withOptions;
    NSUInteger _withoutOptions;
    NSArray *_array;
    NSUInteger _pos;
    GSDaemonProxySync *_proxy;
    id *_token;
}


@property (readonly, nonatomic) NSError *error; // ivar: _error


-(id)initWithStorage:(id)arg0 nameSpace:(id)arg1 withOptions:(NSUInteger)arg2 withoutOptions:(NSUInteger)arg3 ordering:(int)arg4 ;
-(id)nextObject;
-(void)_fetchNextBatch;
-(void)dealloc;


@end


#endif