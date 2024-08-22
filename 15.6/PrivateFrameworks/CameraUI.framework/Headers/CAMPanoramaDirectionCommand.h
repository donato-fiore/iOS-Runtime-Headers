// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMPANORAMADIRECTIONCOMMAND_H
#define CAMPANORAMADIRECTIONCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMPanoramaDirectionCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSInteger _direction; // ivar: __direction


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDirection:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif