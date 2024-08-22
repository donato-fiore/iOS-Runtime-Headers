// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OISFUMEMORYDATAREPRESENTATION_H
#define OISFUMEMORYDATAREPRESENTATION_H

@class NSData;


#import "OISFUDataRepresentation.h"

@interface OISFUMemoryDataRepresentation : OISFUDataRepresentation {
    NSData *mData;
}




-(BOOL)hasSameLocationAs:(id)arg0 ;
-(BOOL)isReadable;
-(NSInteger)dataLength;
-(NSUInteger)readIntoData:(id)arg0 ;
-(id)bufferedInputStream;
-(id)bufferedInputStreamWithBufferSize:(NSUInteger)arg0 ;
-(id)data;
-(id)initWithData:(id)arg0 ;
-(id)initWithDataNoCopy:(id)arg0 ;
-(id)initWithDataRepresentation:(id)arg0 ;
-(id)inputStream;
-(void)dealloc;


@end


#endif