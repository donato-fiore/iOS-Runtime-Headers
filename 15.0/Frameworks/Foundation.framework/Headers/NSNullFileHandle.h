// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSNULLFILEHANDLE_H
#define NSNULLFILEHANDLE_H



#import "NSFileHandle.h"

@interface NSNullFileHandle : NSFileHandle



-(BOOL)closeAndReturnError:(*id)arg0 ;
-(BOOL)getOffset:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)seekToEndReturningOffset:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)seekToOffset:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)synchronizeAndReturnError:(*id)arg0 ;
-(BOOL)truncateAtOffset:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)offsetInFile;
-(NSUInteger)seekToEndOfFile;
-(id)availableData;
-(id)readDataOfLength:(NSUInteger)arg0 ;
-(id)readDataToEndOfFile;
-(id)readDataToEndOfFileAndReturnError:(*id)arg0 ;
-(id)readDataUpToLength:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)readabilityHandler:(SEL)arg0 ;
-(id)writeabilityHandler:(SEL)arg0 ;
-(int)fileDescriptor;
-(void)closeFile;
-(void)seekToFileOffset:(NSUInteger)arg0 ;
-(void)setReadabilityHandler:(id)arg0 ;
-(void)setWriteabilityHandler:(id)arg0 ;
-(void)synchronizeFile;
-(void)truncateFileAtOffset:(NSUInteger)arg0 ;
-(void)writeData:(id)arg0 ;


@end


#endif