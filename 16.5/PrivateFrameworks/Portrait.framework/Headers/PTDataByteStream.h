// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTDATABYTESTREAM_H
#define PTDATABYTESTREAM_H

@class NSData, NSString, NSError;
@protocol PTByteStream;

#import <Foundation/Foundation.h>


@interface PTDataByteStream : NSObject <PTByteStream>



@property (retain) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)readBytes:(*void)arg0 size:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(NSUInteger)size;
-(id)_errorForSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 ;
-(id)initWithData:(id)arg0 ;


@end


#endif