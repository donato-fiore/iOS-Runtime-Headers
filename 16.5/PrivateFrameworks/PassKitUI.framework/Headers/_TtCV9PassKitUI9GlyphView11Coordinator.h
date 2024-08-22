// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV9PASSKITUI9GLYPHVIEW11COORDINATOR_H
#define _TTCV9PASSKITUI9GLYPHVIEW11COORDINATOR_H

@protocol PKGlyphViewDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV9PassKitUI9GlyphView11Coordinator : NSObject <PKGlyphViewDelegate>

 {
    ? parent;
    ? isInErrorState;
}




-(id)init;
-(void)glyphView:(id)arg0 revealingCheckmark:(BOOL)arg1 ;
-(void)glyphViewUserIntentEdgeDidChange:(id)arg0 ;


@end


#endif