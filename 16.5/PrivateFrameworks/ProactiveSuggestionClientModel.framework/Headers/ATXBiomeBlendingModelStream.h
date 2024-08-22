// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXBIOMEBLENDINGMODELSTREAM_H
#define ATXBIOMEBLENDINGMODELSTREAM_H

@class BMStoreConfig, _PASLock;

#import <Foundation/Foundation.h>


@interface ATXBiomeBlendingModelStream : NSObject {
    BMStoreConfig *_storeConfig;
    _PASLock *_lock;
}




-(id)_innerStreamForConsumerSubType:(unsigned char)arg0 ;
-(id)_innerStreamForStreamId:(id)arg0 ;
-(id)_streamIdForConsumerSubType:(unsigned char)arg0 ;
-(id)_validBlendingStreamConsumerSubTypes;
-(id)deprecatedPublisherFromStartTime:(CGFloat)arg0 ;
-(id)init;
-(id)initWithStoreConfig:(id)arg0 ;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)publisherFromStartTime:(CGFloat)arg0 consumerSubType:(unsigned char)arg1 ;
-(id)streamIdentifiers;
-(void)donateBlendingModelUICacheUpdate:(id)arg0 ;


@end


#endif