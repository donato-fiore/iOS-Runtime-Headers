// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIBARBACKGROUNDLAYOUTPROTOTYPING_H
#define _UIBARBACKGROUNDLAYOUTPROTOTYPING_H

@class UIBarBackgroundLayout;


#import "UIColor.h"

@interface _UIBarBackgroundLayoutPrototyping : UIBarBackgroundLayout {
    UIColor *_colorWash;
}




+(BOOL)prototypingEnabled;
+(id)prototypingLayoutForBarType:(NSInteger)arg0 ;
+(void)registerPrototypingCallback:(id)arg0 ;
-(BOOL)bg1HasShadow;
-(BOOL)shouldUseExplicitGeometry;
-(id)bg1Color;
-(id)bg1Effects;
-(id)bg1ShadowColor;
-(void)describeInto:(id)arg0 ;


@end


#endif