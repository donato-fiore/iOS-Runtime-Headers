// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPROGRESSIVEMIMEPARSER_H
#define MFPROGRESSIVEMIMEPARSER_H

@class NSMutableData, NSArray, MFMimePart, NSData;

#import <Foundation/Foundation.h>


@interface MFProgressiveMimeParser : NSObject {
    NSMutableData *_data;
    NSArray *_preserveHeaders;
    id *_delegate;
    id *_context;
    NSUInteger _cursor;
    NSUInteger _lastLength;
    MFMimePart *_topLevelPart;
    MFMimePart *_currentPart;
    NSData *_currentBoundary;
    ? _parserFlags;
}




-(id)_currentBoundary;
-(id)context;
-(id)currentPart;
-(id)data;
-(id)initWithBodyData:(id)arg0 topLevelHeaders:(id)arg1 headersToPreserve:(id)arg2 ;
-(id)topLevelPart;
-(void)_continueParsing;
-(void)_continueParsingBody;
-(void)_continueParsingHeaders;
-(void)_continueParsingStartOfPart;
-(void)_initializeTopLevelPartWithHeaders:(id)arg0 ;
-(void)_reportError:(id)arg0 ;
-(void)dealloc;
-(void)noteDataLengthChanged:(unsigned int)arg0 ;
-(void)setContext:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)start;


@end


#endif