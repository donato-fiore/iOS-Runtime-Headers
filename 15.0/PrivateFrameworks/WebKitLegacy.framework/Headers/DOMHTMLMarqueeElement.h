// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMHTMLMARQUEEELEMENT_H
#define DOMHTMLMARQUEEELEMENT_H



#import "DOMHTMLElement.h"

@interface DOMHTMLMarqueeElement : DOMHTMLElement



-(BOOL)trueSpeed;
-(id)behavior;
-(id)bgColor;
-(id)direction;
-(id)height;
-(id)width;
-(int)loop;
-(unsigned int)hspace;
-(unsigned int)scrollAmount;
-(unsigned int)scrollDelay;
-(unsigned int)vspace;
-(void)setBehavior:(id)arg0 ;
-(void)setBgColor:(id)arg0 ;
-(void)setDirection:(id)arg0 ;
-(void)setHeight:(id)arg0 ;
-(void)setHspace:(unsigned int)arg0 ;
-(void)setLoop:(int)arg0 ;
-(void)setScrollAmount:(unsigned int)arg0 ;
-(void)setScrollDelay:(unsigned int)arg0 ;
-(void)setTrueSpeed:(BOOL)arg0 ;
-(void)setVspace:(unsigned int)arg0 ;
-(void)setWidth:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif