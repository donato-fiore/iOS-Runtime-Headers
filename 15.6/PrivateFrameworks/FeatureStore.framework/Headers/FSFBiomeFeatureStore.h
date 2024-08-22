// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FSFBIOMEFEATURESTORE_H
#define FSFBIOMEFEATURESTORE_H

@class BMStoreConfig;
@protocol FSFFeatureStore;

#import <Foundation/Foundation.h>


@interface FSFBiomeFeatureStore : NSObject <FSFFeatureStore>



@property (readonly, nonatomic) BMStoreConfig *config; // ivar: _config


+(NSUInteger)maxStreamSizeInBytes;
+(id)singletonInstance;
-(id)getStream:(id)arg0 ;
-(id)init;


@end


#endif