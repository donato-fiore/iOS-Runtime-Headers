// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCHUNKEDFILE_H
#define CRKCHUNKEDFILE_H


#import <Foundation/Foundation.h>


@interface CRKChunkedFile : NSObject {
    int mFileDescriptor;
}




+(NSInteger)preferredChunkSizeForFileDescriptor:(int)arg0 ;
+(void)assertFileDescriptorIsValid:(int)arg0 ;
-(NSInteger)readNextChunkIntoBuffer:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithFileDescriptor:(int)arg0 ;


@end


#endif