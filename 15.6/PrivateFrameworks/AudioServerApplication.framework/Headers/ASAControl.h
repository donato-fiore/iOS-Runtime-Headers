// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASACONTROL_H
#define ASACONTROL_H



#import "ASAObject.h"

@interface ASAControl : ASAObject

@property (readonly, nonatomic) unsigned int controlElement;
@property (readonly, nonatomic) unsigned int controlScope;


-(id)coreAudioClassName;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;


@end


#endif