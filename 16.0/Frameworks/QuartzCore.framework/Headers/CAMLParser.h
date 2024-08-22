// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMLPARSER_H
#define CAMLPARSER_H

@class NSURL, NSError;
@protocol CAMLParserDelegate;

#import <Foundation/Foundation.h>


@interface CAMLParser : NSObject {
    *_CAMLParserData _data;
}


@property (retain) NSURL *baseURL;
@property (weak) NSObject<CAMLParserDelegate> *delegate;
@property (readonly) NSError *error;
@property (readonly) id *result;


+(id)parseContentsOfURL:(id)arg0 ;
+(id)parser;
-(BOOL)parseBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(BOOL)parseContentsOfURL:(id)arg0 ;
-(BOOL)parseData:(id)arg0 ;
-(BOOL)parseString:(id)arg0 ;
-(id)attributeForKey:(id)arg0 remove:(BOOL)arg1 ;
-(id)didFailToLoadResourceFromURL:(id)arg0 ;
-(id)elementValue;
-(id)init;
-(id)objectById:(id)arg0 ;
-(id)willLoadResourceFromURL:(id)arg0 ;
-(void)dealloc;
-(void)didLoadResource:(id)arg0 fromURL:(id)arg1 ;
-(void)parserError:(id)arg0 ;
-(void)parserWarning:(id)arg0 ;
-(void)setElementValue:(id)arg0 ;


@end


#endif