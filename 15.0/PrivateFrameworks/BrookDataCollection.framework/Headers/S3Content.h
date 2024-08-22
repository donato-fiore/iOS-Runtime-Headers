// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef S3CONTENT_H
#define S3CONTENT_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface S3Content : NSObject {
    NSData *_gzipContentCache;
}


@property (retain, nonatomic) NSString *bucket; // ivar: _bucket
@property (retain, nonatomic) NSData *content; // ivar: _content
@property (retain, nonatomic) NSString *filename; // ivar: _filename
@property (nonatomic) BOOL gzip; // ivar: _gzip
@property (readonly, nonatomic) NSData *gzipContent;
@property (readonly, nonatomic) NSString *mimeType;


-(id)_gzipCompressData:(id)arg0 ;
-(id)initWithContent:(id)arg0 filename:(id)arg1 bucket:(id)arg2 gzip:(BOOL)arg3 ;


@end


#endif