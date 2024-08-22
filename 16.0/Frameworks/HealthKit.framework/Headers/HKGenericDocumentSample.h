// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKGENERICDOCUMENTSAMPLE_H
#define HKGENERICDOCUMENTSAMPLE_H

@class NSFileHandle, NSString, NSData;


#import "HKDocumentSample.h"

@interface HKGenericDocumentSample : HKDocumentSample {
    NSFileHandle *_fileHandle;
}


@property (readonly, copy) NSString *extension; // ivar: _extension
@property (readonly, copy) NSData *thumbnailData; // ivar: _thumbnailData
@property (readonly, copy) NSString *title; // ivar: _title


+(id)documentSampleWithTitle:(id)arg0 fileHandle:(id)arg1 date:(id)arg2 metadata:(id)arg3 ;


@end


#endif