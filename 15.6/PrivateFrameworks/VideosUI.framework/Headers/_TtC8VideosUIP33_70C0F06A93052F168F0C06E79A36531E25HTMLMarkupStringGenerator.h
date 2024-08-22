// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8VIDEOSUIP33_70C0F06A93052F168F0C06E79A36531E25HTMLMARKUPSTRINGGENERATOR_H
#define _TTC8VIDEOSUIP33_70C0F06A93052F168F0C06E79A36531E25HTMLMARKUPSTRINGGENERATOR_H

@protocol VUIHTMLMarkupParser;

#import <Foundation/Foundation.h>


@interface _TtC8VideosUIP33_70C0F06A93052F168F0C06E79A36531E25HTMLMarkupStringGenerator : NSObject <VUIHTMLMarkupParser>

 {
    ? parser;
    ? logger;
    ? accumulator;
    ? fontTraitsStack;
    ? didParseEverything;
}




-(id)init;
-(void)parser:(id)arg0 didEndElement:(NSUInteger)arg1 ;
-(void)parser:(id)arg0 didFindCharacters:(id)arg1 ;
-(void)parser:(id)arg0 didStartElement:(NSUInteger)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg0 ;
-(void)parserDidFindNewline:(id)arg0 ;
-(void)parserDidStartDocument:(id)arg0 ;


@end


#endif