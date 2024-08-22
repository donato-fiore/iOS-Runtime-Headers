// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSCOMPRESSEDINPUTSTREAM_H
#define ICSCOMPRESSEDINPUTSTREAM_H

@class NSData, NSString;
@protocol ICSInputByteStream;

#import <Foundation/Foundation.h>


@interface ICSCompressedInputStream : NSObject <ICSInputByteStream>

 {
    ? underStream;
    NSData *rawData;
    *void buffer;
    NSUInteger bufPos;
    NSUInteger bufLen;
    BOOL finalBlock;
    BOOL didFinalize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)eos;
-(char)read;
-(id)initWithData:(id)arg0 ;
-(void)dealloc;


@end


#endif