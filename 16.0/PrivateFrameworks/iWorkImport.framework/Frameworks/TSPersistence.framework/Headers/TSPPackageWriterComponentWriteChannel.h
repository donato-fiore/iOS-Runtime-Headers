// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPPACKAGEWRITERCOMPONENTWRITECHANNEL_H
#define TSPPACKAGEWRITERCOMPONENTWRITECHANNEL_H

@class TSUZipFileWriter, NSString;
@protocol TSPComponentWriteChannel;

#import <Foundation/Foundation.h>


@interface TSPPackageWriterComponentWriteChannel : NSObject <TSPComponentWriteChannel>

 {
    TSUZipFileWriter *_archiveWriter;
    uint8_t _isClosed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithArchiveWriter:(id)arg0 ;
-(void)close;
-(void)writeData:(id)arg0 ;


@end


#endif