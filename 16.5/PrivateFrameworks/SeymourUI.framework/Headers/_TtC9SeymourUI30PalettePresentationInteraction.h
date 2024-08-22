// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI30PALETTEPRESENTATIONINTERACTION_H
#define _TTC9SEYMOURUI30PALETTEPRESENTATIONINTERACTION_H

@class UIView;

#import <Foundation/Foundation.h>


@interface _TtC9SeymourUI30PalettePresentationInteraction : NSObject {
    ? delegate;
    ? presentedViewController;
    ? panGestureRecognizer;
    ? tapGestureRecognizer;
}


@property (nonatomic, retain) UIView *view; // ivar: view


-(id)init;
-(void)panGestureRecognized:(id)arg0 ;
-(void)tapGestureRecognized:(id)arg0 ;


@end


#endif