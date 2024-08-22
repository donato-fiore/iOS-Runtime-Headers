// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMFOCUSCOMMAND_H
#define CAMFOCUSCOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMFocusCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSInteger _focusMode; // ivar: __focusMode
@property (readonly, nonatomic) CGPoint _focusPointOfInterest; // ivar: __focusPointOfInterest
@property (readonly, nonatomic) BOOL _shouldUseSmoothFocus; // ivar: __shouldUseSmoothFocus


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFocusMode:(NSInteger)arg0 ;
-(id)initWithFocusMode:(NSInteger)arg0 atPointOfInterest:(struct CGPoint )arg1 ;
-(id)initWithFocusMode:(NSInteger)arg0 atPointOfInterest:(struct CGPoint )arg1 smooth:(BOOL)arg2 ;
-(id)initWithFocusMode:(NSInteger)arg0 smooth:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif