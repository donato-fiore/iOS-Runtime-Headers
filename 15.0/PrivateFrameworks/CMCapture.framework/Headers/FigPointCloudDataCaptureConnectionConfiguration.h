// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGPOINTCLOUDDATACAPTURECONNECTIONCONFIGURATION_H
#define FIGPOINTCLOUDDATACAPTURECONNECTIONCONFIGURATION_H



#import "FigVideoCaptureConnectionConfiguration.h"

@interface FigPointCloudDataCaptureConnectionConfiguration : FigVideoCaptureConnectionConfiguration

@property (nonatomic) int projectorMode; // ivar: _projectorMode
@property (nonatomic) BOOL supplementalPointCloudData; // ivar: _supplementalPointCloudData


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)description;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif