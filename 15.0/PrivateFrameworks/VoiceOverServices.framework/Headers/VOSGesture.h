// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VOSGESTURE_H
#define VOSGESTURE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VOSGesture : NSObject <NSSecureCoding>

 {
    NSString *_rawValue;
}


@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *rawValue;


+(BOOL)supportsSecureCoding;
+(id)BackTapDoubleTap;
+(id)BackTapTripleTap;
+(id)FiveFingerDoubleTap;
+(id)FiveFingerQuadrupleTap;
+(id)FiveFingerSingleTap;
+(id)FiveFingerTripleTap;
+(id)FourFingerDoubleTap;
+(id)FourFingerFlickDown;
+(id)FourFingerFlickLeft;
+(id)FourFingerFlickRight;
+(id)FourFingerFlickUp;
+(id)FourFingerQuadrupleTap;
+(id)FourFingerSingleTap;
+(id)FourFingerTripleTap;
+(id)Invalid;
+(id)OneFingerDoubleTap;
+(id)OneFingerDoubleTapAndHold;
+(id)OneFingerFlickDown;
+(id)OneFingerFlickLeft;
+(id)OneFingerFlickRight;
+(id)OneFingerFlickUp;
+(id)OneFingerQuadrupleTap;
+(id)OneFingerSingleTap;
+(id)OneFingerSingleTapAndHold;
+(id)OneFingerTripleTap;
+(id)ThreeFingerDoubleTap;
+(id)ThreeFingerDoubleTapAndHold;
+(id)ThreeFingerDoubleTapHoldAndFlickDown;
+(id)ThreeFingerDoubleTapHoldAndFlickLeft;
+(id)ThreeFingerDoubleTapHoldAndFlickRight;
+(id)ThreeFingerDoubleTapHoldAndFlickUp;
+(id)ThreeFingerFlickDown;
+(id)ThreeFingerFlickLeft;
+(id)ThreeFingerFlickRight;
+(id)ThreeFingerFlickUp;
+(id)ThreeFingerQuadrupleTap;
+(id)ThreeFingerSingleTap;
+(id)ThreeFingerSingleTapAndHold;
+(id)ThreeFingerTripleTap;
+(id)TwoFingerDoubleTap;
+(id)TwoFingerDoubleTapAndHold;
+(id)TwoFingerFlickDown;
+(id)TwoFingerFlickLeft;
+(id)TwoFingerFlickRight;
+(id)TwoFingerFlickUp;
+(id)TwoFingerQuadrupleTap;
+(id)TwoFingerRotateClockwise;
+(id)TwoFingerRotateCounterclockwise;
+(id)TwoFingerScrub;
+(id)TwoFingerSingleTap;
+(id)TwoFingerSingleTapAndHold;
+(id)TwoFingerTripleTap;
+(id)_gesturesForFingerCount:(NSInteger)arg0 ;
+(id)allGestures;
+(id)conflictingZoomGestures;
+(id)fiveFingerGestures;
+(id)fourFingerGestures;
+(id)gestureWithStringValue:(id)arg0 ;
+(id)horizontalMirrorGestureForGesture:(id)arg0 ;
+(id)oneFingerGestures;
+(id)rtlGestureForGesture:(id)arg0 ;
+(id)threeFingerGestures;
+(id)twoFingerGestures;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithRawValue:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif