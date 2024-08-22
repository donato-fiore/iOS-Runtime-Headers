// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19APPSTOREKITINTERNALP33_7BE152A6E9112DDB85E95517955C27A519NQMLSTRINGGENERATOR_H
#define _TTC19APPSTOREKITINTERNALP33_7BE152A6E9112DDB85E95517955C27A519NQMLSTRINGGENERATOR_H

@protocol ASKNQMLParser;

#import <Foundation/Foundation.h>


@interface _TtC19AppStoreKitInternalP33_7BE152A6E9112DDB85E95517955C27A519NqmlStringGenerator : NSObject <ASKNQMLParser>

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