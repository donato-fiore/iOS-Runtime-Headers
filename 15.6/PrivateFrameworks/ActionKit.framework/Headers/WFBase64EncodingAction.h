// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFBASE64ENCODINGACTION_H
#define WFBASE64ENCODINGACTION_H

@class WFAction;



@interface WFBase64EncodingAction : WFAction



+(BOOL)outputIsExemptFromTaintTrackingInheritance;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)base64EncodedStringItemFromFile:(id)arg0 lineBreakMode:(id)arg1 ;
-(id)inputContentClasses;
-(id)itemFromBase64EncodedString:(id)arg0 nameIfKnown:(id)arg1 ;
-(id)outputContentClasses;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif