// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSFILEHANDLE_H
#define NSFILEHANDLE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSFileHandle : NSObject <NSSecureCoding>



@property (readonly, copy) NSData *availableData;
@property (readonly) NSUInteger offsetInFile;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)fileHandleForReadingAtPath:(id)arg0 ;
+(id)fileHandleForReadingFromURL:(id)arg0 error:(*id)arg1 ;
+(id)fileHandleForReadingFromURL:(id)arg0 mode:(unsigned short)arg1 error:(*id)arg2 ;
+(id)fileHandleForUpdatingAtPath:(id)arg0 ;
+(id)fileHandleForUpdatingURL:(id)arg0 error:(*id)arg1 ;
+(id)fileHandleForUpdatingURL:(id)arg0 mode:(unsigned short)arg1 error:(*id)arg2 ;
+(id)fileHandleForWritingAtPath:(id)arg0 ;
+(id)fileHandleForWritingToURL:(id)arg0 error:(*id)arg1 ;
+(id)fileHandleForWritingToURL:(id)arg0 mode:(unsigned short)arg1 error:(*id)arg2 ;
+(id)fileHandleWithNullDevice;
+(id)fileHandleWithStandardError;
+(id)fileHandleWithStandardInput;
+(id)fileHandleWithStandardOutput;
+(void)initialize;
-(BOOL)closeAndReturnError:(*id)arg0 ;
-(BOOL)getOffset:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)seekToEndReturningOffset:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)seekToOffset:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)synchronizeAndReturnError:(*id)arg0 ;
-(BOOL)truncateAtOffset:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(Class)classForCoder;
-(NSUInteger)seekToEndOfFile;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileDescriptor:(int)arg0 ;
-(id)initWithFileDescriptor:(int)arg0 closeOnDealloc:(BOOL)arg1 ;
-(id)initWithPath:(id)arg0 flags:(NSInteger)arg1 createMode:(NSInteger)arg2 ;
-(id)initWithPath:(id)arg0 flags:(NSInteger)arg1 createMode:(NSInteger)arg2 error:(*id)arg3 ;
-(id)initWithURL:(id)arg0 flags:(NSInteger)arg1 createMode:(NSInteger)arg2 error:(*id)arg3 ;
-(id)readDataOfLength:(NSUInteger)arg0 ;
-(id)readDataToEndOfFile;
-(id)readDataToEndOfFileAndReturnError:(*id)arg0 ;
-(id)readDataUpToLength:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)readabilityHandler:(SEL)arg0 ;
-(id)writeabilityHandler:(SEL)arg0 ;
-(int)fileDescriptor;
-(void)_closeOnDealloc;
-(void)closeFile;
-(void)encodeWithCoder:(id)arg0 ;
-(void)seekToFileOffset:(NSUInteger)arg0 ;
-(void)setReadabilityHandler:(id)arg0 ;
-(void)setWriteabilityHandler:(id)arg0 ;
-(void)synchronizeFile;
-(void)truncateFileAtOffset:(NSUInteger)arg0 ;
-(void)writeData:(id)arg0 ;


@end


#endif