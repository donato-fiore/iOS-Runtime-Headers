// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDIRECTORYPACKAGEWRITERCOMPONENTFILEWRITECHANNEL_H
#define TSPDIRECTORYPACKAGEWRITERCOMPONENTFILEWRITECHANNEL_H

@class NSURL, TSUFileIOChannel, NSString;
@protocol TSPComponentWriteChannel;

#import <Foundation/Foundation.h>


@interface TSPDirectoryPackageWriterComponentFileWriteChannel : NSObject <TSPComponentWriteChannel>

 {
    NSURL *_URL;
    id *_handler;
    TSUFileIOChannel *_writeChannel;
    uint8_t _isClosed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithURL:(id)arg0 handler:(id)arg1 ;
-(void)close;
-(void)writeData:(id)arg0 ;


@end


#endif