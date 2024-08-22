// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASASLIDERCONTROL_H
#define ASASLIDERCONTROL_H



#import "ASAControl.h"

@interface ASASliderControl : ASAControl

@property (readonly, nonatomic) _ASASliderRange range;
@property (nonatomic) unsigned int value;


-(id)coreAudioClassName;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;


@end


#endif