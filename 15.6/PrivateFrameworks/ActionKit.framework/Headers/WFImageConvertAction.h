// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFIMAGECONVERTACTION_H
#define WFIMAGECONVERTACTION_H

@class WFAction;



@interface WFImageConvertAction : WFAction



+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(BOOL)preserveMetadataWithPreserveMetadata:(BOOL)arg0 imageFormat:(id)arg1 ;
-(id)imageQualityWithQuality:(id)arg0 imageFormat:(id)arg1 ;
-(id)typeFromImageFormatString:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif