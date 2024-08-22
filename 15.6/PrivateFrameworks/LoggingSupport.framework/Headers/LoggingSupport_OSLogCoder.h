// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LOGGINGSUPPORT_OSLOGCODER_H
#define LOGGINGSUPPORT_OSLOGCODER_H

@protocol OSLogCoder;

#import <Foundation/Foundation.h>


@interface LoggingSupport_OSLogCoder : NSObject <OSLogCoder>

 {
    *? _fmt_cmd;
    *os_trace_blob_s _ob;
    *os_trace_blob_s _ob_pub;
    *os_trace_blob_s _ob_priv;
    unsigned char _privacy_level;
    os_trace_blob_s _ob_mask;
    char _maskbuf;
    NSUInteger _maxsz;
    unsigned short _written;
    unsigned short _offset;
    BOOL _truncated;
    BOOL _initialized;
    BOOL _mask;
}




-(void)_initBlob;
-(void)appendBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)setPublic;
-(void)setTruncated;


@end


#endif