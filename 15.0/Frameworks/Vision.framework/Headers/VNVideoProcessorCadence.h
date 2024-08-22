// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNVIDEOPROCESSORCADENCE_H
#define VNVIDEOPROCESSORCADENCE_H

@class NSString;
@protocol VNVideoProcessorRequestConfigurationPopulating, NSCopying;

#import <Foundation/Foundation.h>


@interface VNVideoProcessorCadence : NSObject <VNVideoProcessorRequestConfigurationPopulating, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)populateVCPVideoProcessorRequestConfiguration:(id)arg0 ;


@end


#endif