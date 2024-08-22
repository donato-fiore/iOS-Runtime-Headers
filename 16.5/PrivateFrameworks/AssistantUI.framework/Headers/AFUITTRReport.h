// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUITTRREPORT_H
#define AFUITTRREPORT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface AFUITTRReport : NSObject

@property (copy, nonatomic) NSString *actualASRTranscript; // ivar: _actualASRTranscript
@property (copy, nonatomic) NSString *actualDomain; // ivar: _actualDomain
@property (nonatomic) NSInteger asrIsCorrect; // ivar: _asrIsCorrect
@property (nonatomic) NSInteger audioRecordingIsUnderstandable; // ivar: _audioRecordingIsUnderstandable
@property (nonatomic) NSInteger domainIsCorrect; // ivar: _domainIsCorrect
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (copy, nonatomic) NSString *userSuggestedASRTranscript; // ivar: _userSuggestedASRTranscript
@property (copy, nonatomic) NSString *userSuggestedDomain; // ivar: _userSuggestedDomain


-(id)analyzeASRIsCorrect;
-(id)analyzeASRIsWrong;
-(id)composeRadarOutput;
-(id)getTimestampFormatted;
-(id)getTranscriptQuoted;
-(id)init;


@end


#endif