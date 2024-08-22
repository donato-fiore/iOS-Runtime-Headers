// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ECSVGPROFILEEXTRACTOR_H
#define _ECSVGPROFILEEXTRACTOR_H

@class NSXMLParser, NSString, NSConditionLock;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface _ECSVGProfileExtractor : NSObject <NSXMLParserDelegate>

 {
    NSXMLParser *_parser;
    NSString *_namespace;
    NSString *_version;
    NSString *_baseProfile;
    uint8_t _hasParsed;
    NSConditionLock *_parseLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_parseIfNeeded;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;


@end


#endif