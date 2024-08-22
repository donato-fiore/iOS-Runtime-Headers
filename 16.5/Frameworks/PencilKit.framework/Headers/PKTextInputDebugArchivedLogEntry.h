// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTEXTINPUTDEBUGARCHIVEDLOGENTRY_H
#define PKTEXTINPUTDEBUGARCHIVEDLOGENTRY_H

@class NSDictionary;


#import "PKTextInputDebugLogEntry.h"

@interface PKTextInputDebugArchivedLogEntry : PKTextInputDebugLogEntry {
    NSDictionary *_logDictionary;
}




-(BOOL)_loadInputDrawingFromDictionary:(id)arg0 errorMessage:(*id)arg1 ;
-(BOOL)_loadRecognitionResultFromDictionary:(id)arg0 ;
-(BOOL)_loadTargetContentInfoFromDictionary:(id)arg0 targets:(id)arg1 ;
-(BOOL)_loadTextInputTargetsFromDictionaries:(id)arg0 ;
-(id)dictionaryRepresentationWithDetailLevel:(NSInteger)arg0 targetContentLevel:(NSInteger)arg1 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithRecordingLogEntry:(id)arg0 error:(*id)arg1 ;


@end


#endif