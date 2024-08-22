// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENXMLSAXPARSER_H
#define ENXMLSAXPARSER_H

@class NSURLConnection, NSArray;
@protocol ENXMLSaxParserDelegate;

#import <Foundation/Foundation.h>


@interface ENXMLSaxParser : NSObject {
    *_xmlParserCtxt _parserContext;
    BOOL _parserHalted;
    NSURLConnection *_urlConnection;
    NSArray *_dtds;
}


@property (weak, nonatomic) NSObject<ENXMLSaxParserDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isHTML; // ivar: _isHTML


-(?)lookupEntity;
-(BOOL)parseContents:(id)arg0 ;
-(BOOL)parseContentsOfFile:(id)arg0 ;
-(BOOL)parseContentsOfURL:(id)arg0 ;
-(BOOL)parseContentsOfURLWithRequest:(id)arg0 ;
-(BOOL)parseData:(id)arg0 ;
-(id)init;
-(struct _xmlSAXHandler )saxHandler;
-(void)_stopAndSendError:(id)arg0 ;
-(void)appendBytes:(char *)arg0 length:(int)arg1 ;
-(void)appendData:(id)arg0 ;
-(void)connection:(id)arg0 didFailWithError:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveData:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)connectionDidFinishLoading:(id)arg0 ;
-(void)dealloc;
-(void)finalizeParser;
-(void)stopParser;


@end


#endif