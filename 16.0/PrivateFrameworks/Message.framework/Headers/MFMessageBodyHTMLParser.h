// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMESSAGEBODYHTMLPARSER_H
#define MFMESSAGEBODYHTMLPARSER_H

@class NSScanner;


#import "MFMessageBodyParser.h"

@interface MFMessageBodyHTMLParser : MFMessageBodyParser {
    NSScanner *_scanner;
}




-(BOOL)_isMilestoneTagName:(id)arg0 ;
-(BOOL)parse;
-(Class)messageBodyElementClass;
-(id)initWithHTML:(id)arg0 ;
-(int)messageBodyStringAccumulatorDefaultOptions;
-(void)_consumeNodesFromNode:(id)arg0 upToNode:(id)arg1 ;
-(void)_findBody;
-(void)dealloc;
-(void)didFindError:(id)arg0 ;


@end


#endif