// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSCRIPTIONQUERY_H
#define PKTRANSCRIPTIONQUERY_H

@class NSString, CHTranscriptionQuery;


#import "PKQuery.h"

@interface PKTranscriptionQuery : PKQuery

@property (readonly, nonatomic) NSString *transcription; // ivar: _transcription
@property (retain, nonatomic) CHTranscriptionQuery *transcriptionQuery; // ivar: _transcriptionQuery


// -(id)contextualTextResultsForContextStrokes:(id)arg0 completion:(id)arg1 shouldCancel:(unk)arg2  ;
-(id)initWithRecognitionSessionManager:(id)arg0 ;
-(void)dealloc;
-(void)pause;
-(void)start;
-(void)teardown;


@end


#endif