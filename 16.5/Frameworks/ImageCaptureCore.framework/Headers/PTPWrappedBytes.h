// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTPWRAPPEDBYTES_H
#define PTPWRAPPEDBYTES_H


#import <Foundation/Foundation.h>


@interface PTPWrappedBytes : NSObject {
    NSUInteger _offset;
    NSUInteger _capacity;
    BOOL _allocatedBytes;
    char * _bytes;
    int _fd;
    BOOL _useByteBuffer;
    NSUInteger _excessDataLength;
    CGFloat _progressNotificationTime;
    *unk _progressNotifier;
    *void _progressNotifierContext;
    int _lastNotifiedProgress;
}




+(id)wrappedBytesWithBytes:(*void)arg0 capacity:(NSUInteger)arg1 ;
+(id)wrappedBytesWithCapacity:(NSUInteger)arg0 ;
-(*void)bytes;
-(*void)mutableBytes;
-(BOOL)wasInitWithFD;
-(CGFloat)percentFull;
-(NSUInteger)appendBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(NSUInteger)appendData:(id)arg0 ;
-(NSUInteger)capacity;
-(NSUInteger)excessDataLength;
-(NSUInteger)length;
-(NSUInteger)offset;
-(NSUInteger)rewindBytesToPosition64:(NSUInteger)arg0 ;
-(NSUInteger)setCapacity:(NSUInteger)arg0 ;
-(id)data;
-(id)description;
-(id)init;
-(id)initWithBytes:(*void)arg0 capacity:(NSUInteger)arg1 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithFileDescriptor:(int)arg0 capacity:(NSUInteger)arg1 ;
-(id)mutableData;
-(void)dealloc;
-(void)setLength:(NSUInteger)arg0 ;
-(void)setProgressNotifierCallback:(*unk)arg0 context:(*void)arg1 ;


@end


#endif