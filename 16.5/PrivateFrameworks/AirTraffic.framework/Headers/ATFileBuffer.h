// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATFILEBUFFER_H
#define ATFILEBUFFER_H

@class NSFileHandle;

#import <Foundation/Foundation.h>


@interface ATFileBuffer : NSObject {
    NSFileHandle *_bufferFileHandle;
    NSUInteger _currentReadLocation;
    NSUInteger _length;
}




-(NSUInteger)length;
-(id)init;
-(id)readDataOfLength:(NSUInteger)arg0 ;
-(void)appendData:(id)arg0 ;
-(void)rewind:(NSUInteger)arg0 ;
-(void)rewindData:(id)arg0 ;


@end


#endif