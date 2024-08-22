// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDREPLAYSTORAGECONTROLLER_H
#define IMDREPLAYSTORAGECONTROLLER_H

@class NSString, IDSKVStore;

#import <Foundation/Foundation.h>


@interface IMDReplayStorageController : NSObject

@property (readonly, retain, nonatomic) NSString *filePath; // ivar: _filePath
@property (retain, nonatomic) IDSKVStore *store; // ivar: _store


-(BOOL)storeDictionary:(id)arg0 error:(*id)arg1 ;
-(id)copyNextBatchWithSize:(NSUInteger)arg0 iterationContext:(*id)arg1 ;
-(id)initWithFilePath:(id)arg0 ;
-(void)dealloc;
-(void)deleteReplayDB;


@end


#endif