// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMUSICCURATORCONFIGURATIONWRAPPER_H
#define PGMUSICCURATORCONFIGURATIONWRAPPER_H


#import <Foundation/Foundation.h>


@interface PGMusicCuratorConfigurationWrapper : NSObject {
    ? configuration;
}


@property (nonatomic, readonly) NSInteger audioFilePrefetchThresholdInDays;
@property (nonatomic, readonly) NSInteger metadataPrefetchThresholdInDays;


+(id)defaultConfiguration;
-(id)init;


@end


#endif