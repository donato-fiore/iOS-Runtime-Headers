// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
}


@property (readonly, nonatomic) unsigned short errorCode; // ivar: _errorCode
@property (readonly, nonatomic) NSUInteger priorVersion; // ivar: _priorVersion


+(id)streamWithName:(id)arg0 itemType:(NSInteger)arg1 service:(id)arg2 payload:(NSUInteger)arg3 ;
-(BOOL)_flushItemsWithError:(*id)arg0 ;
-(BOOL)addItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeItemId:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 itemType:(NSInteger)arg1 service:(id)arg2 payload:(NSUInteger)arg3 flushThreshold:(NSUInteger)arg4 ;
-(void)cancel;
-(void)dealloc;
-(void)finish:(id)arg0 ;
-(void)finishWithOptions:(id)arg0 ;


@end


#endif