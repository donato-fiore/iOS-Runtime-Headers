// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSWFRPROCESSORCONTROLLERCONFIGURATION_H
#define BWSWFRPROCESSORCONTROLLERCONFIGURATION_H



#import "BWStillImageProcessorControllerConfiguration.h"

@interface BWSWFRProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration {
    int version;
}


@property (nonatomic) int lossyCompressionLevel; // ivar: _lossyCompressionLevel
@property (nonatomic) int version; // ivar: _version


-(void)dealloc;


@end


#endif