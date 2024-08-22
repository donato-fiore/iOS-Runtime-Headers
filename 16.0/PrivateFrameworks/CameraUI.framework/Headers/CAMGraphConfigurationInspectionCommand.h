// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMGRAPHCONFIGURATIONINSPECTIONCOMMAND_H
#define CAMGRAPHCONFIGURATIONINSPECTIONCOMMAND_H



#import "CAMCaptureCommand.h"
#import "CAMCaptureGraphConfiguration.h"

@interface CAMGraphConfigurationInspectionCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMCaptureGraphConfiguration *_knownGraphConfiguration; // ivar: __knownGraphConfiguration
@property (retain, nonatomic, setter=_setResolvedGraphConfiguration:) CAMCaptureGraphConfiguration *_resolvedGraphConfiguration; // ivar: __resolvedGraphConfiguration


-(NSInteger)_resolvedVideoConfigurationFromContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKnownGraphConfiguration:(id)arg0 ;
-(id)userInfo;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif