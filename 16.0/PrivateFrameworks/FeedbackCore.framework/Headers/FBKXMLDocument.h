// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKXMLDOCUMENT_H
#define FBKXMLDOCUMENT_H


#import <Foundation/Foundation.h>


@interface FBKXMLDocument : NSObject {
    *_xmlDoc _document;
}




-(id)initWithHTMLData:(id)arg0 ;
-(id)initWithHTMLString:(id)arg0 ;
-(id)initWithXMLData:(id)arg0 ;
-(id)initWithXMLString:(id)arg0 ;
-(id)performXPathQuery:(id)arg0 ;
-(void)dealloc;


@end


#endif