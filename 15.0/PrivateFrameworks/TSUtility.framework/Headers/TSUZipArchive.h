// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUZIPARCHIVE_H
#define TSUZIPARCHIVE_H

@class NSMutableDictionary;
@protocol TSUReadChannel;

#import <Foundation/Foundation.h>


@interface TSUZipArchive : NSObject {
    NSMutableDictionary *_entries;
}


@property (readonly, nonatomic) NSUInteger archiveLength;
@property (readonly, nonatomic) NSObject<TSUReadChannel> *readChannel;


-(BOOL)readCentralFileHeaderWithBuffer:(**void)arg0 dataSize:(*NSUInteger)arg1 ;
-(id)debugDescription;
-(id)entryForName:(id)arg0 ;
-(id)init;
-(id)readChannelForEntry:(id)arg0 ;
-(void)addEntry:(id)arg0 ;
-(void)enumerateEntriesUsingBlock:(id)arg0 ;
-(void)readArchiveWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)readCentralDirectoryData:(id)arg0 entryCount:(NSUInteger)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)readCentralDirectoryWithEntryCount:(NSUInteger)arg0 offset:(NSInteger)arg1 size:(NSInteger)arg2 channel:(id)arg3 queue:(id)arg4 completion:(id)arg5 ;
-(void)readEndOfCentralDirectoryData:(id)arg0 channel:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;


@end


#endif