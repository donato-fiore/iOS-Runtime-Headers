// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BUZIPREADCHANNEL_H
#define BUZIPREADCHANNEL_H

@class NSString;
@protocol BUReadChannel;

#import <Foundation/Foundation.h>

#import "BUZipArchive.h"
#import "BUZipEntry.h"

@interface BUZipReadChannel : NSObject <BUReadChannel>



@property (retain, nonatomic) BUZipArchive *archive; // ivar: _archive
@property (retain, nonatomic) NSObject<BUReadChannel> *archiveReadChannel; // ivar: _archiveReadChannel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BUZipEntry *entry; // ivar: _entry
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) Class superclass;
@property (nonatomic) BOOL validateCRC; // ivar: _validateCRC


-(BOOL)processData:(id)arg0 CRC:(*unsigned int)arg1 isDone:(BOOL)arg2 handler:(id)arg3 ;
-(BOOL)readFileHeaderFromData:(id)arg0 headerLength:(*NSUInteger)arg1 ;
-(id)initWithEntry:(id)arg0 archive:(id)arg1 validateCRC:(BOOL)arg2 ;
-(void)addBarrier:(id)arg0 ;
-(void)close;
-(void)dealloc;
// -(void)handleFailureWithHandler:(id)arg0 error:(unk)arg1  ;
-(void)readFromOffset:(NSInteger)arg0 length:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)readWithFileHeaderLength:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)readWithHandler:(id)arg0 ;
-(void)setLowWater:(NSUInteger)arg0 ;


@end


#endif