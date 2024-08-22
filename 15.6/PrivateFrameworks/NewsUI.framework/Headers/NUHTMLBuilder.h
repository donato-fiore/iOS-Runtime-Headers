// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUHTMLBUILDER_H
#define NUHTMLBUILDER_H

@class NSMutableString;

#import <Foundation/Foundation.h>


@interface NUHTMLBuilder : NSObject

@property (retain, nonatomic) NSMutableString *string; // ivar: _string


-(id)HTML;
-(id)URLEncode:(id)arg0 ;
-(id)appendBreak;
-(id)appendHTML:(id)arg0 ;
-(id)appendLink:(id)arg0 withURL:(id)arg1 ;
-(id)appendParagraph:(id)arg0 ;
-(id)appendParagraphText:(id)arg0 ;
-(id)appendStrong:(id)arg0 ;
-(id)appendText:(id)arg0 ;
-(id)encodeHTMLEntities:(id)arg0 ;
-(id)fullHTML;
-(id)init;


@end


#endif