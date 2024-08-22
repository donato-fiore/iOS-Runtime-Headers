// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMEDIAMETADATAVIRTUALRESOURCE_H
#define PLMEDIAMETADATAVIRTUALRESOURCE_H



#import "PLVirtualResource.h"

@interface PLMediaMetadataVirtualResource : PLVirtualResource {
    NSUInteger _dataLength;
}




-(NSInteger)dataLength;
-(NSInteger)estimatedDataLength;
-(id)initWithAsset:(id)arg0 resourceType:(unsigned int)arg1 version:(unsigned int)arg2 recipeID:(unsigned int)arg3 dataLength:(NSUInteger)arg4 ;


@end


#endif