// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDATTACHMENTENCRYPTEDREADER_H
#define HDATTACHMENTENCRYPTEDREADER_H

@class NSString;
@protocol HDAttachmentReader;

#import <Foundation/Foundation.h>

#import "HDEncryptedArchive.h"

@interface HDAttachmentEncryptedReader : NSObject <HDAttachmentReader>

 {
    HDEncryptedArchive *_archive;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initAdoptingArchive:(id)arg0 ;
-(id)readDataUpToLength:(NSUInteger)arg0 offset:(NSUInteger)arg1 error:(*id)arg2 ;
-(void)close;


@end


#endif