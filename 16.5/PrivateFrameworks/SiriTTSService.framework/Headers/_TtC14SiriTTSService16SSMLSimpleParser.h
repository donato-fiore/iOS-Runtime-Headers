// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14SIRITTSSERVICE16SSMLSIMPLEPARSER_H
#define _TTC14SIRITTSSERVICE16SSMLSIMPLEPARSER_H

@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface _TtC14SiriTTSService16SSMLSimpleParser : NSObject <NSXMLParserDelegate>

 {
    ? phonemes;
}




-(id)init;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parserDidStartDocument:(id)arg0 ;


@end


#endif