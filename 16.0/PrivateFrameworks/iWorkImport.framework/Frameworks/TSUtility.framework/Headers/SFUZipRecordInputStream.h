// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUZIPRECORDINPUTSTREAM_H
#define SFUZIPRECORDINPUTSTREAM_H

@protocol SFUBufferedInputStream;

#import <Foundation/Foundation.h>


@interface SFUZipRecordInputStream : NSObject {
    id<SFUBufferedInputStream> *mInput;
    char * mBuffer;
    NSInteger mBufferStart;
    NSInteger mBufferEnd;
}




-(char *)dataAtOffset:(NSInteger)arg0 size:(NSUInteger)arg1 end:(NSInteger)arg2 ;
-(id)initWithDataRepresentation:(id)arg0 ;
-(void)dealloc;


@end


#endif