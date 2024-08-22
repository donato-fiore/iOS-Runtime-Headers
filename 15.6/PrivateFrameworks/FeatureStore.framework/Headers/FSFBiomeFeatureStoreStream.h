// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FSFBIOMEFEATURESTORESTREAM_H
#define FSFBIOMEFEATURESTORESTREAM_H

@class BMStreamDatastore;
@protocol FSFFeatureStoreStream;

#import <Foundation/Foundation.h>


@interface FSFBiomeFeatureStoreStream : NSObject <FSFFeatureStoreStream>



@property (retain, nonatomic) BMStreamDatastore *readStore; // ivar: _readStore
@property (retain, nonatomic) BMStreamDatastore *writeStore; // ivar: _writeStore


-(BOOL)insert:(id)arg0 withInteractionId:(id)arg1 atTime:(CGFloat)arg2 ;
-(id)initWithConfig:(id)arg0 streamId:(id)arg1 ;
-(id)retrieve:(id)arg0 ;
-(id)retrieveEvents:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;


@end


#endif