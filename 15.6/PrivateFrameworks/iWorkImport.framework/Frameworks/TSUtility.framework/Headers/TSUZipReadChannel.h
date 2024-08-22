// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUZIPREADCHANNEL_H
#define TSUZIPREADCHANNEL_H

@class NSString;
@protocol TSUReadChannel;

#import <Foundation/Foundation.h>

#import "TSUZipEntry.h"
#import "TSUZipArchive.h"

@interface TSUZipReadChannel : NSObject <TSUReadChannel>

 {
    TSUZipEntry *_entry;
    TSUZipArchive *_archive;
    BOOL _validateCRC;
    id<TSUReadChannel> *_archiveReadChannel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) Class superclass;


-(BOOL)processData:(id)arg0 CRC:(*unsigned int)arg1 isDone:(BOOL)arg2 handler:(id)arg3 ;
-(BOOL)readFileHeaderFromData:(id)arg0 headerLength:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithEntry:(id)arg0 archive:(id)arg1 validateCRC:(BOOL)arg2 ;
-(void)addBarrier:(id)arg0 ;
-(void)close;
-(void)dealloc;
// -(void)handleFailureWithHandler:(id)arg0 error:(unk)arg1  ;
-(void)readFromOffset:(NSInteger)arg0 length:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)readFromOffsetAndWait:(NSInteger)arg0 length:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)readWithFileHeaderLength:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)readWithHandler:(id)arg0 ;
-(void)readWithHandlerAndWait:(id)arg0 ;
-(void)setLowWater:(NSUInteger)arg0 ;


@end


#endif