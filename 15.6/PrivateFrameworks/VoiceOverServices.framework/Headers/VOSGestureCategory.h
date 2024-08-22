// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VOSGESTURECATEGORY_H
#define VOSGESTURECATEGORY_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface VOSGestureCategory : NSObject

@property (retain, nonatomic) NSArray *gestures; // ivar: _gestures
@property (retain, nonatomic) NSString *localizedCategoryName; // ivar: _localizedCategoryName


+(BOOL)isFlickGesture:(id)arg0 ;
+(BOOL)isRotateGesture:(id)arg0 ;
+(BOOL)isScrubGesture:(id)arg0 ;
+(BOOL)isTapAndHoldGesture:(id)arg0 ;
+(BOOL)isTapGesture:(id)arg0 ;
+(id)allCategories;
+(id)backTaps;
+(id)fiveFingerTaps;
+(id)fourFingerFlicks;
+(id)fourFingerTaps;
+(id)oneFingerFlicks;
+(id)oneFingerTapAndHolds;
+(id)oneFingerTaps;
+(id)threeFingerDoubleTapHoldAndFlicks;
+(id)threeFingerFlicks;
+(id)threeFingerTapAndHolds;
+(id)threeFingerTaps;
+(id)twoFingerFlicks;
+(id)twoFingerRotates;
+(id)twoFingerScrubs;
+(id)twoFingerTapAndHolds;
+(id)twoFingerTaps;
-(BOOL)containsGesture:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithGestures:(id)arg0 localizedCategoryName:(id)arg1 ;


@end


#endif