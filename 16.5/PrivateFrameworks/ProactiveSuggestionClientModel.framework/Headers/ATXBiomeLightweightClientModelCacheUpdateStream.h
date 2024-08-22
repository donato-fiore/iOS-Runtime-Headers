// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXBIOMELIGHTWEIGHTCLIENTMODELCACHEUPDATESTREAM_H
#define ATXBIOMELIGHTWEIGHTCLIENTMODELCACHEUPDATESTREAM_H

@class BMStoreStream, NSString;
@protocol BMStream, BMSourceStream;

#import <Foundation/Foundation.h>


@interface ATXBiomeLightweightClientModelCacheUpdateStream : NSObject <BMStream, BMSourceStream>

 {
    BMStoreStream *_inner;
}


@property (readonly, nonatomic) NSString *identifier;


-(id)init;
-(id)initWithStoreConfig:(id)arg0 ;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(id)publisherWithStartTime:(id)arg0 endTime:(id)arg1 ;
-(id)source;
-(void)sendEvent:(id)arg0 ;


@end


#endif