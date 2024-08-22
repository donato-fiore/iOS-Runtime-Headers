// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFOVERLAYTEXTACTION_H
#define WFOVERLAYTEXTACTION_H

@class WFAction;



@interface WFOverlayTextAction : WFAction



-(id)overlayImage:(id)arg0 withText:(id)arg1 font:(id)arg2 color:(id)arg3 position:(id)arg4 ;
-(id)paragraphStyleForPosition:(id)arg0 ;
-(id)textAttributesForPosition:(id)arg0 font:(id)arg1 ;
-(struct CGRect )drawingRectForPosition:(id)arg0 text:(id)arg1 font:(id)arg2 image:(id)arg3 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif