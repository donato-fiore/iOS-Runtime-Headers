// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECMESSAGEBODYHTMLPARSER_H
#define ECMESSAGEBODYHTMLPARSER_H

@class NSScanner;


#import "ECMessageBodyParser.h"

@interface ECMessageBodyHTMLParser : ECMessageBodyParser {
    NSScanner *_scanner;
}




-(BOOL)_isMilestoneTagName:(id)arg0 ;
-(BOOL)parse;
-(Class)messageBodyElementClass;
-(NSUInteger)messageBodyStringAccumulatorDefaultOptions;
-(id)initWithHTML:(id)arg0 ;
-(void)_consumeNodesFromNode:(id)arg0 upToNode:(id)arg1 ;
-(void)_findBody;
-(void)dealloc;
-(void)didFindError:(id)arg0 ;


@end


#endif