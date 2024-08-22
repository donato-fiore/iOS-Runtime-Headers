// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNVIDEOPROCESSORREQUESTPROCESSINGOPTIONS_H
#define VNVIDEOPROCESSORREQUESTPROCESSINGOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "VNVideoProcessorCadence.h"

@interface VNVideoProcessorRequestProcessingOptions : NSObject <NSCopying>



@property (copy) VNVideoProcessorCadence *cadence; // ivar: _cadence


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_createVCPVideoProcessorRequestConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif