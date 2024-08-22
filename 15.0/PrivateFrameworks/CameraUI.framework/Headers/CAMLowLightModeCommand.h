// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMLOWLIGHTMODECOMMAND_H
#define CAMLOWLIGHTMODECOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMLowLightModeCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSInteger _lowLightMode; // ivar: __lowLightMode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLowLightMode:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif