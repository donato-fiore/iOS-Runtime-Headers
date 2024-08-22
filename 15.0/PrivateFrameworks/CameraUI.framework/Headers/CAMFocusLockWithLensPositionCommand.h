// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMFOCUSLOCKWITHLENSPOSITIONCOMMAND_H
#define CAMFOCUSLOCKWITHLENSPOSITIONCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMFocusLockWithLensPositionCommand : CAMCaptureCommand

@property (copy, nonatomic, setter=_setCompletionBlock:) id *_completionBlock; // ivar: __completionBlock
@property (nonatomic, setter=_setLensPosition:) float _lensPosition; // ivar: __lensPosition


+(float)currentLensPositionSentinel;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLensPosition:(float)arg0 completionBlock:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif