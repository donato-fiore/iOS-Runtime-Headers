// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMSTARTPANORAMACOMMAND_H
#define CAMSTARTPANORAMACOMMAND_H



#import "CAMCaptureCommand.h"
#import "CAMPanoramaCaptureRequest.h"

@interface CAMStartPanoramaCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMPanoramaCaptureRequest *_request; // ivar: __request


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif