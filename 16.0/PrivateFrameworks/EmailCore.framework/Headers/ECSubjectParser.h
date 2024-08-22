// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECSUBJECTPARSER_H
#define ECSUBJECTPARSER_H


#import <Foundation/Foundation.h>


@interface ECSubjectParser : NSObject



+(BOOL)subjectHasReplyPrefix:(id)arg0 ;
+(NSUInteger)_fastPrefixLengthForSubject:(id)arg0 replyOnly:(BOOL)arg1 ;
+(NSUInteger)_lastPrefixDelimiterLocationForSubject:(id)arg0 ;
+(NSUInteger)_prefixLengthForSubject:(id)arg0 replyOnly:(BOOL)arg1 ;
+(NSUInteger)prefixLengthForSubject:(id)arg0 ;
+(NSUInteger)prefixLengthForSubject:(id)arg0 replyOnly:(BOOL)arg1 ;
+(id)subjectWithoutPrefixForSubject:(id)arg0 ;
+(id)subjectWithoutPrefixForSubject:(id)arg0 prefix:(*id)arg1 ;
+(id)subjectWithoutPrefixIncludingListMarkersForSubject:(id)arg0 prefix:(*id)arg1 ;


@end


#endif