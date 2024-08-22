// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMVIDEOSTABILIZATIONCOMMAND_H
#define CAMVIDEOSTABILIZATIONCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMVideoStabilizationCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isEnabled) BOOL _enabled; // ivar: __enabled
@property (readonly, nonatomic) NSInteger _strength; // ivar: __strength


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAutomaticVideoStabilizationEnabled:(BOOL)arg0 strength:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif