// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKSPEECHBUBBLEANNOTATION_H
#define AKSPEECHBUBBLEANNOTATION_H



#import "AKThoughtBubbleAnnotation.h"

@interface AKSpeechBubbleAnnotation : AKThoughtBubbleAnnotation

@property CGFloat pointyBitBaseWidthAngle; // ivar: _pointyBitBaseWidthAngle


+(BOOL)supportsSecureCoding;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg0 ;
-(id)displayName;
-(id)initWithCoder:(id)arg0 ;
-(id)keysForValuesToObserveForAdornments;
-(id)keysForValuesToObserveForRedrawing;
-(id)keysForValuesToObserveForUndo;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif