// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXUNIVERSALBIOMEUISTREAM_H
#define ATXUNIVERSALBIOMEUISTREAM_H

@class BMStoreConfig, _PASLock;

#import <Foundation/Foundation.h>


@interface ATXUniversalBiomeUIStream : NSObject {
    BMStoreConfig *_storeConfig;
    _PASLock *_lock;
}




-(id)_innerStreamForConsumerSubType:(unsigned char)arg0 ;
-(id)_innerStreamForStreamId:(id)arg0 ;
-(id)_streamIdForConsumerSubType:(unsigned char)arg0 ;
-(id)_validUIStreamConsumerSubTypes;
-(id)deprecatedGenericEventPublisherFromStartTime:(CGFloat)arg0 ;
-(id)genericEventPublisherFromStartTime:(CGFloat)arg0 ;
-(id)genericEventPublisherFromStartTime:(CGFloat)arg0 consumerSubType:(unsigned char)arg1 ;
-(id)init;
-(id)initWithStoreConfig:(id)arg0 ;
-(id)streamIdentifiers;
-(void)donateGenericUIEvent:(id)arg0 ;


@end


#endif