// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMFLASHCOMMAND_H
#define CAMFLASHCOMMAND_H

@protocol NSCopying, NSCoding;


#import "CAMCaptureCommand.h"

@interface CAMFlashCommand : CAMCaptureCommand <NSCopying, NSCoding>



@property (readonly, nonatomic) NSInteger _flashMode; // ivar: __flashMode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFlashMode:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif