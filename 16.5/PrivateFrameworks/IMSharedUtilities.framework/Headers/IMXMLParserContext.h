// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMXMLPARSERCONTEXT_H
#define IMXMLPARSERCONTEXT_H

@class NSData, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface IMXMLParserContext : NSObject

@property (readonly, retain) NSData *inContentAsData; // ivar: _inContentAsData
@property (readonly, retain) NSString *name;
@property (readonly, retain) NSArray *resultsForLogging;


-(id)inContent;
-(id)initWithContent:(id)arg0 ;
-(id)initWithContentAsData:(id)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif