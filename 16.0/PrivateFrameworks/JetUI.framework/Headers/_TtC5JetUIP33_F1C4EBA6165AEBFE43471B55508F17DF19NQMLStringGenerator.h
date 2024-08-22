// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC5JETUIP33_F1C4EBA6165AEBFE43471B55508F17DF19NQMLSTRINGGENERATOR_H
#define _TTC5JETUIP33_F1C4EBA6165AEBFE43471B55508F17DF19NQMLSTRINGGENERATOR_H

@protocol JUNQMLParser;

#import <Foundation/Foundation.h>


@interface _TtC5JetUIP33_F1C4EBA6165AEBFE43471B55508F17DF19NQMLStringGenerator : NSObject <JUNQMLParser>

 {
    ? parser;
    ? configuration;
    ? orderedListTracker;
    ? accumulator;
    ? attributeStack;
    ? didParseEverything;
    ? foregroundColor;
}




-(id)init;
-(void)parser:(id)arg0 didEndElement:(NSUInteger)arg1 ;
-(void)parser:(id)arg0 didEndListOfStyle:(NSUInteger)arg1 ;
-(void)parser:(id)arg0 didFindCharacters:(id)arg1 ;
-(void)parser:(id)arg0 didStartElement:(NSUInteger)arg1 attributes:(id)arg2 ;
-(void)parser:(id)arg0 didStartListOfStyle:(NSUInteger)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg0 ;
-(void)parserDidEndListElement:(id)arg0 ;
-(void)parserDidFindNewline:(id)arg0 ;
-(void)parserDidStartDocument:(id)arg0 ;
-(void)parserDidStartListElement:(id)arg0 ;


@end


#endif