// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFIMAGEROTATEACTION_H
#define WFIMAGEROTATEACTION_H

@class WFAction;



@interface WFImageRotateAction : WFAction



+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(BOOL)isProgressIndeterminate;
-(void)rotateImage:(id)arg0 byDegrees:(CGFloat)arg1 completion:(id)arg2 ;
-(void)rotateMovie:(id)arg0 byDegrees:(CGFloat)arg1 completion:(id)arg2 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif