// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDCONNECTIONLINELAYOUT_H
#define TSDCONNECTIONLINELAYOUT_H



#import "TSDConnectionLineAbstractLayout.h"

@interface TSDConnectionLineLayout : TSDConnectionLineAbstractLayout {
    CGFloat _startClipT;
    CGFloat _endClipT;
}




-(id)createConnectedPathFrom:(id)arg0 to:(id)arg1 withControlPoints:(struct CGPoint )arg2 ;
-(id)quadraticCurve:(struct CGPoint )arg0 ;
-(struct CGPoint )controlPointForPointA:(struct CGPoint )arg0 pointB:(struct CGPoint )arg1 andOriginalA:(struct CGPoint )arg2 originalB:(struct CGPoint )arg3 ;
-(struct CGPoint )getControlKnobPosition:(NSUInteger)arg0 ;


@end


#endif