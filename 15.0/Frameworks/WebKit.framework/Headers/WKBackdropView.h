// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKBACKDROPVIEW_H
#define WKBACKDROPVIEW_H

@class UIBackdropView, NSString;
@protocol WKContentControlled;



@interface WKBackdropView : UIBackdropView <WKContentControlled>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif