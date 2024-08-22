// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OAVTEXTBODYPROPERTIES_H
#define OAVTEXTBODYPROPERTIES_H


#import <Foundation/Foundation.h>


@interface OAVTextBodyProperties : NSObject



+(int)readAnchor:(id)arg0 ;
+(int)readRotation:(id)arg0 ;
+(int)readWrapStyle:(id)arg0 ;
+(unsigned char)flowTypeWithLayoutFlowString:(id)arg0 altLayoutFlowString:(id)arg1 ;
+(void)readFromManager:(id)arg0 toShape:(id)arg1 state:(id)arg2 ;


@end


#endif