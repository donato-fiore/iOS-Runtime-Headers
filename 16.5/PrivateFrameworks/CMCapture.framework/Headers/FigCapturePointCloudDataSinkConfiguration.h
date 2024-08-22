// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTUREPOINTCLOUDDATASINKCONFIGURATION_H
#define FIGCAPTUREPOINTCLOUDDATASINKCONFIGURATION_H



#import "FigCaptureSinkConfiguration.h"

@interface FigCapturePointCloudDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL discardsLatePointCloudData; // ivar: _discardsLatePointCloudData


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)description;
-(id)initWithXPCEncoding:(id)arg0 ;
-(int)sinkType;


@end


#endif