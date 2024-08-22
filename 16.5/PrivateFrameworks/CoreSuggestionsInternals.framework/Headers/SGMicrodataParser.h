// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMICRODATAPARSER_H
#define SGMICRODATAPARSER_H


#import <Foundation/Foundation.h>

#import "SGMicrodataParserStackItem.h"

@interface SGMicrodataParser : NSObject

@property (readonly, nonatomic) SGMicrodataParserStackItem *stackItem; // ivar: _stackItem


+(id)parse:(id)arg0 ;
+(id)whitespaceSplit:(id)arg0 ;
-(id)initWithDocument:(id)arg0 ;
-(void)endElement;
-(void)startElement:(id)arg0 withAttributes:(id)arg1 ;
-(void)textContent:(id)arg0 ;


@end


#endif