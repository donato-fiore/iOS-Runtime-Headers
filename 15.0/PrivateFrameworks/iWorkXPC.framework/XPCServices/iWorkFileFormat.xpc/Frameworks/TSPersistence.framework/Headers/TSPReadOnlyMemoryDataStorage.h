// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPREADONLYMEMORYDATASTORAGE_H
#define TSPREADONLYMEMORYDATASTORAGE_H

@class NSData;


#import "TSPStreamDataStorage.h"

@interface TSPReadOnlyMemoryDataStorage : TSPStreamDataStorage {
    NSData *_NSData;
}




-(BOOL)archiveInfoMessage:(*void)arg0 archiver:(id)arg1 packageWriter:(id)arg2 ;
-(BOOL)isReadable;
-(BOOL)readOnly;
-(NSUInteger)encodedLength;
-(id)NSDataWithOptions:(NSUInteger)arg0 ;
-(id)initWithNSData:(id)arg0 ;
-(id)writeData:(id)arg0 toPackageWriter:(id)arg1 infoMessage:(*void)arg2 preferredFilename:(id)arg3 shouldRemoveData:(BOOL)arg4 error:(*id)arg5 ;
-(void)performIOChannelReadWithAccessor:(id)arg0 ;


@end


#endif