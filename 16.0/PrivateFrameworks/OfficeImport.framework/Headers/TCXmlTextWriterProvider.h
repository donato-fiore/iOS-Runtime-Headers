// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCXMLTEXTWRITERPROVIDER_H
#define TCXMLTEXTWRITERPROVIDER_H


#import <Foundation/Foundation.h>


@interface TCXmlTextWriterProvider : NSObject

@property (readonly, nonatomic) *_xmlTextWriter textWriter; // ivar: _textWriter


-(BOOL)setUp;
-(BOOL)setUpWithTextWriter:(struct _xmlTextWriter *)arg0 ;
-(BOOL)tearDown;
-(void)dealloc;


@end


#endif