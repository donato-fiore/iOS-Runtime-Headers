// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPGENERICVISITOR_H
#define CPGENERICVISITOR_H

@protocol CPVisitor;

#import <Foundation/Foundation.h>


@interface CPGenericVisitor : NSObject <CPVisitor>





-(void)visitBody:(id)arg0 ;
-(void)visitChunk:(id)arg0 ;
-(void)visitColumn:(id)arg0 ;
-(void)visitCompoundGraphic:(id)arg0 ;
-(void)visitImage:(id)arg0 ;
-(void)visitImageRegion:(id)arg0 ;
-(void)visitLayoutArea:(id)arg0 ;
-(void)visitPage:(id)arg0 ;
-(void)visitParagraph:(id)arg0 ;
-(void)visitRegion:(id)arg0 ;
-(void)visitRotation:(id)arg0 ;
-(void)visitShape:(id)arg0 ;
-(void)visitShapeRegion:(id)arg0 ;
-(void)visitTextBox:(id)arg0 ;
-(void)visitTextLine:(id)arg0 ;
-(void)visitZone:(id)arg0 ;


@end


#endif