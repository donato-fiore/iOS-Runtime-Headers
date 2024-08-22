// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMPREPAREPHOTOSETTINGSCOMMAND_H
#define CAMPREPAREPHOTOSETTINGSCOMMAND_H



#import "CAMCaptureCommand.h"
#import "CAMCaptureGraphConfiguration.h"

@interface CAMPreparePhotoSettingsCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMCaptureGraphConfiguration *_desiredGraphConfiguration; // ivar: __desiredGraphConfiguration


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGraphConfiguration:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif