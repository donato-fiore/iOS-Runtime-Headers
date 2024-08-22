// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FSFBIOMEFEATURESTORE_H
#define FSFBIOMEFEATURESTORE_H

@class BMStoreConfig;
@protocol FSFFeatureStore;

#import <Foundation/Foundation.h>


@interface FSFBiomeFeatureStore : NSObject <FSFFeatureStore>



@property (readonly, nonatomic) BMStoreConfig *config; // ivar: _config


+(NSUInteger)maxStreamSizeInBytes;
+(id)singletonInstance;
-(BOOL)deleteAllStreams;
-(BOOL)deleteStream:(id)arg0 ;
-(id)getStream:(id)arg0 ;
-(id)init;


@end


#endif