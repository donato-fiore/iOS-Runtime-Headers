// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMTORCHCOMMAND_H
#define CAMTORCHCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMTorchCommand : CAMCaptureCommand

@property (readonly, nonatomic) float _level; // ivar: __level
@property (readonly, nonatomic) NSInteger _torchMode; // ivar: __torchMode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTorchLevel:(float)arg0 ;
-(id)initWithTorchMode:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif