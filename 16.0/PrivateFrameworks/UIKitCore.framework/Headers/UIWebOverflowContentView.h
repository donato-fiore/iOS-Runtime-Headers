// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWEBOVERFLOWCONTENTVIEW_H
#define UIWEBOVERFLOWCONTENTVIEW_H

@class CALayer;


#import "UIView.h"

@interface UIWebOverflowContentView : UIView

@property (retain, nonatomic) CALayer *webLayer; // ivar: _webLayer


-(id)initWithLayer:(id)arg0 ;
-(id)superview;
-(void)_setCachedSubviews:(id)arg0 ;
-(void)dealloc;
-(void)fixUpViewAfterInsertion;
-(void)replaceLayer:(id)arg0 ;
-(void)willBeRemoved;


@end


#endif