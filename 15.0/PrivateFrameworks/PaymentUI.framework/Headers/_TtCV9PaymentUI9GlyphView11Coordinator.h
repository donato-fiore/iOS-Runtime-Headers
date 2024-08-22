// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTCV9PAYMENTUI9GLYPHVIEW11COORDINATOR_H
#define _TTCV9PAYMENTUI9GLYPHVIEW11COORDINATOR_H

@protocol PKGlyphViewDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV9PaymentUI9GlyphView11Coordinator : NSObject <PKGlyphViewDelegate>

 {
    ? parent;
    ? isInErrorState;
}




-(id)init;
-(void)glyphView:(id)arg0 revealingCheckmark:(BOOL)arg1 ;
-(void)glyphViewUserIntentEdgeDidChange:(id)arg0 ;


@end


#endif