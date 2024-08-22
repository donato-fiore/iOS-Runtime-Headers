// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTUREDEPTHDATASINKCONFIGURATION_H
#define FIGCAPTUREDEPTHDATASINKCONFIGURATION_H



#import "FigCaptureSinkConfiguration.h"

@interface FigCaptureDepthDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic) BOOL discardsLateDepthData; // ivar: _discardsLateDepthData
@property (nonatomic) BOOL filteringEnabled; // ivar: _filteringEnabled


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)description;
-(id)initWithXPCEncoding:(id)arg0 ;
-(int)sinkType;


@end


#endif