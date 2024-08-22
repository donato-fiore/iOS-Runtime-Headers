// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMCOLORSPACECOMMAND_H
#define CAMCOLORSPACECOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMColorSpaceCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSInteger _colorSpace; // ivar: __colorSpace


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColorSpace:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif