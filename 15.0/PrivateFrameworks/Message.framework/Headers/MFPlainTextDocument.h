// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFPLAINTEXTDOCUMENT_H
#define MFPLAINTEXTDOCUMENT_H

@class NSMutableString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface MFPlainTextDocument : NSObject {
    NSMutableString *_text;
    NSMutableArray *_fragments;
}




-(NSUInteger)fragmentCount;
-(id)archivedRepresentation;
-(id)quotedString:(unsigned int)arg0 ;
-(id)string;
-(void)appendArchivedRepresentation:(id)arg0 ;
-(void)appendString:(id)arg0 withQuoteLevel:(unsigned int)arg1 ;
-(void)getFormatFlowedString:(*id)arg0 insertedTrailingSpaces:(*BOOL)arg1 encoding:(unsigned int)arg2 ;
-(void)getString:(*id)arg0 quoteLevel:(*unsigned int)arg1 ofFragmentAtIndex:(NSUInteger)arg2 ;


@end


#endif