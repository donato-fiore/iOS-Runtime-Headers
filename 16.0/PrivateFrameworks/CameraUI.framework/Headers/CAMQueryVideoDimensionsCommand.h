// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMQUERYVIDEODIMENSIONSCOMMAND_H
#define CAMQUERYVIDEODIMENSIONSCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMQueryVideoDimensionsCommand : CAMCaptureCommand

@property (copy, nonatomic, setter=_setCompletionBlock:) id *_completionBlock; // ivar: __completionBlock


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCompletionBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif