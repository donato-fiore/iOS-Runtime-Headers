// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OISFUZIPARCHIVEMEMORYDATAREPRESENTATION_H
#define OISFUZIPARCHIVEMEMORYDATAREPRESENTATION_H

@class NSData, NSString;
@protocol SFUZipArchiveDataRepresentation;


#import "OISFUDataRepresentation.h"

@interface OISFUZipArchiveMemoryDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation>

 {
    NSData *mData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasSameLocationAs:(id)arg0 ;
-(BOOL)isReadable;
-(NSInteger)dataLength;
-(id)bufferedInputStream;
-(id)bufferedInputStreamWithBufferSize:(NSUInteger)arg0 ;
-(id)bufferedInputStreamWithOffset:(NSInteger)arg0 length:(NSInteger)arg1 ;
-(id)data;
-(id)initWithData:(id)arg0 ;
-(id)inputStream;
-(id)inputStreamWithOffset:(NSInteger)arg0 length:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif