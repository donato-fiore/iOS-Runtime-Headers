// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGMETADATAITEMCAPTURECONNECTIONCONFIGURATION_H
#define FIGMETADATAITEMCAPTURECONNECTIONCONFIGURATION_H



#import "FigCaptureConnectionConfiguration.h"

@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (retain, nonatomic) *OpaqueCMClock clock; // ivar: _clock
@property (retain, nonatomic) *opaqueCMFormatDescription formatDescription; // ivar: _formatDescription
@property (nonatomic) int sourceSubType; // ivar: _sourceSubType


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)description;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;


@end


#endif