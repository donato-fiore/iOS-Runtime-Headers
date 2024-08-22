// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIWINDOWSCENECOORDINATESPACE_H
#define _UIWINDOWSCENECOORDINATESPACE_H

@class FBSSceneSettings, NSString;
@protocol UICoordinateSpace;

#import <Foundation/Foundation.h>

#import "UIWindowScene.h"

@interface _UIWindowSceneCoordinateSpace : NSObject <UICoordinateSpace>

 {
    FBSSceneSettings *_effectiveSettings;
}


@property (readonly, nonatomic) CGRect bounds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene


-(id)initWithWindowScene:(id)arg0 effectiveSettings:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromCoordinateSpace:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toCoordinateSpace:(id)arg1 ;


@end


#endif