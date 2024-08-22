// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMCTMINITIATECAPTURECOMMAND_H
#define CAMCTMINITIATECAPTURECOMMAND_H



#import "CAMCaptureCommand.h"
#import "CAMMomentCaptureSettings.h"

@interface CAMCTMInitiateCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMMomentCaptureSettings *_settings; // ivar: __settings


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif