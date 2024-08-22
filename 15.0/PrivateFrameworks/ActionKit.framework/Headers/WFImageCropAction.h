// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFIMAGECROPACTION_H
#define WFIMAGECROPACTION_H

@class WFAction;



@interface WFImageCropAction : WFAction



+(BOOL)outputIsExemptFromTaintTrackingInheritance;
+(id)imageByCroppingImage:(id)arg0 toRect:(struct CGRect )arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif