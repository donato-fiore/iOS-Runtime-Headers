// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIMOTIONEFFECT_H
#define UIMOTIONEFFECT_H

@class NSString;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "_UIMotionAnalyzerSettings.h"

@interface UIMotionEffect : NSObject <NSCopying, NSCoding>

 {
    _UIMotionAnalyzerSettings *_preferredMotionAnalyzerSettings;
    NSString *_animationIdentifier;
}




-(id)_animationIdentifier;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg0 ;
-(id)_preferredMotionAnalyzerSettings;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset )arg0 ;
-(void)_setPreferredMotionAnalyzerSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif