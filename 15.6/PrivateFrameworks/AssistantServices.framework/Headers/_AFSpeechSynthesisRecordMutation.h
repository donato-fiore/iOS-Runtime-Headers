// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFSPEECHSYNTHESISRECORDMUTATION_H
#define _AFSPEECHSYNTHESISRECORDMUTATION_H

@class NSString;
@protocol AFSpeechSynthesisRecordMutating;

#import <Foundation/Foundation.h>

#import "AFSpeechSynthesisRecord.h"

@interface _AFSpeechSynthesisRecordMutation : NSObject <AFSpeechSynthesisRecordMutating>

 {
    AFSpeechSynthesisRecord *_baseModel;
    NSString *_utterance;
    NSUInteger _beginTimestamp;
    NSUInteger _endTimestamp;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setBeginTimestamp:(NSUInteger)arg0 ;
-(void)setEndTimestamp:(NSUInteger)arg0 ;
-(void)setUtterance:(id)arg0 ;


@end


#endif