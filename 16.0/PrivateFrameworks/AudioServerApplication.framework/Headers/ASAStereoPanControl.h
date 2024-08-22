// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASASTEREOPANCONTROL_H
#define ASASTEREOPANCONTROL_H



#import "ASAControl.h"

@interface ASAStereoPanControl : ASAControl

@property (readonly, nonatomic) unsigned int leftPanChannel;
@property (readonly, nonatomic) unsigned int rightPanChannel;
@property (nonatomic) float value;


-(id)coreAudioClassName;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(unsigned int)getPanChannel:(BOOL)arg0 ;


@end


#endif