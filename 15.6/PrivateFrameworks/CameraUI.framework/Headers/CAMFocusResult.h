// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMFOCUSRESULT_H
#define CAMFOCUSRESULT_H


#import <Foundation/Foundation.h>


@interface CAMFocusResult : NSObject

@property (readonly, nonatomic) BOOL contrastBasedFocusDidEnd; // ivar: _contrastBasedFocusDidEnd
@property (readonly, nonatomic) BOOL contrastBasedFocusDidStart; // ivar: _contrastBasedFocusDidStart
@property (readonly, nonatomic) BOOL deviceSupportsFocus; // ivar: _deviceSupportsFocus
@property (readonly, nonatomic) NSInteger focusMode; // ivar: _focusMode
@property (readonly, nonatomic, getter=isPerformingContrastDetection) BOOL performingContrastDetection; // ivar: _performingContrastDetection
@property (readonly, nonatomic) CGPoint pointOfInterest; // ivar: _pointOfInterest


-(id)description;
-(id)initWithMode:(NSInteger)arg0 pointOfInterest:(struct CGPoint )arg1 performingContrastDetection:(BOOL)arg2 contrastBasedFocusDidStart:(BOOL)arg3 contrastBasedFocusDidEnd:(BOOL)arg4 deviceSupportsFocus:(BOOL)arg5 ;


@end


#endif