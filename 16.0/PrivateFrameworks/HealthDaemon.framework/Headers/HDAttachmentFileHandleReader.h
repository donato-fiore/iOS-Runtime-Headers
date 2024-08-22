// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDATTACHMENTFILEHANDLEREADER_H
#define HDATTACHMENTFILEHANDLEREADER_H

@class NSFileHandle, NSString;
@protocol HDAttachmentReader;

#import <Foundation/Foundation.h>


@interface HDAttachmentFileHandleReader : NSObject <HDAttachmentReader>

 {
    NSFileHandle *_fileHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initAdoptingFileHandle:(id)arg0 ;
-(id)readDataUpToLength:(NSUInteger)arg0 offset:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)close;


@end


#endif