// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTURESYNCHRONIZEDMETADATAOBJECTDATA_H
#define AVCAPTURESYNCHRONIZEDMETADATAOBJECTDATA_H

@class NSArray;


#import "AVCaptureSynchronizedData.h"
#import "AVCaptureSynchronizedMetadataObjectDataInternal.h"

@interface AVCaptureSynchronizedMetadataObjectData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedMetadataObjectDataInternal *_internal;
}


@property (readonly) NSArray *metadataObjects;


+(void)initialize;
-(id)_initWithMetadataObjectCollection:(id)arg0 ;
-(id)handledMetadataObjectTypes;
-(void)addSynchronizedData:(id)arg0 ;
-(void)dealloc;


@end


#endif