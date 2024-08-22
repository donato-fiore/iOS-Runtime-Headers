// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KVDATASETSTREAM_H
#define KVDATASETSTREAM_H

@class NSString, NSMutableArray;
@protocol KVDonateService;

#import <Foundation/Foundation.h>


@interface KVDatasetStream : NSObject {
    NSObject<KVDonateService> *_service;
    NSInteger _itemType;
    NSString *_name;
    NSMutableArray *_itemBuffers;
    NSUInteger _flushThreshold;
    NSUInteger _bufferSize;
    BOOL _active;
}




+(id)streamWithName:(id)arg0 itemType:(NSInteger)arg1 service:(id)arg2 ;
-(BOOL)_flushItemsWithError:(*id)arg0 ;
-(BOOL)addItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeItemId:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 itemType:(NSInteger)arg1 service:(id)arg2 flushThreshold:(NSUInteger)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)finish:(id)arg0 ;


@end


#endif