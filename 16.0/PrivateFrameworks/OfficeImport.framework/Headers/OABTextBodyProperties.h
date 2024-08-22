// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OABTEXTBODYPROPERTIES_H
#define OABTEXTBODYPROPERTIES_H


#import <Foundation/Foundation.h>


@interface OABTextBodyProperties : NSObject



+(void)readTextBodyProperties:(id)arg0 textBox:(struct EshTextBox *)arg1 useDefaults:(BOOL)arg2 state:(id)arg3 ;
+(void)setAutoFit:(BOOL)arg0 textBodyProperties:(id)arg1 ;
+(void)setIsAnchorCenter:(int)arg0 textBodyProperties:(id)arg1 ;
+(void)setTextAnchor:(int)arg0 textBodyProperties:(id)arg1 ;
+(void)setTextDirection:(int)arg0 textBodyProperties:(id)arg1 ;
+(void)setTextFlow:(int)arg0 textBodyProperties:(id)arg1 ;
+(void)setTextRotation:(int)arg0 textBodyProperties:(id)arg1 ;
+(void)setWrap:(int)arg0 textBodyProperties:(id)arg1 ;
+(void)writeTextBodyProperties:(id)arg0 toShapeBase:(*void)arg1 state:(id)arg2 ;


@end


#endif