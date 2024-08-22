// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OISFUZIPRECORDINPUTSTREAM_H
#define OISFUZIPRECORDINPUTSTREAM_H

@protocol OISFUBufferedInputStream;

#import <Foundation/Foundation.h>


@interface OISFUZipRecordInputStream : NSObject {
    id<OISFUBufferedInputStream> *mInput;
    char * mBuffer;
    NSInteger mBufferStart;
    NSInteger mBufferEnd;
}




-(char *)dataAtOffset:(NSInteger)arg0 size:(NSUInteger)arg1 end:(NSInteger)arg2 ;
-(id)initWithDataRepresentation:(id)arg0 ;
-(void)dealloc;


@end


#endif