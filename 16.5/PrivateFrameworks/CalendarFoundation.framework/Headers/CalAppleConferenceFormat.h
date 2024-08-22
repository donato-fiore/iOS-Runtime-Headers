// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALAPPLECONFERENCEFORMAT_H
#define CALAPPLECONFERENCEFORMAT_H

@protocol CalConferencePersistenceFormat;

#import <Foundation/Foundation.h>


@interface CalAppleConferenceFormat : NSObject <CalConferencePersistenceFormat>





+(BOOL)_line:(id)arg0 matchesRegex:(id)arg1 outFoundRange:(struct _NSRange *)arg2 ;
+(id)_buildDeserializationResultFromState:(id)arg0 ;
+(id)_conferenceTitleRegex;
+(id)_detailsDelimiterRegex;
+(id)_joinMethodTitleAndFeaturesRegex;
+(id)_startDelimiterRegex;
+(id)calBundle;
+(id)calConferenceSerializationHandle;
+(void)_parseBlockTitle:(id)arg0 state:(id)arg1 ;
+(void)_parseConferenceTitle:(id)arg0 state:(id)arg1 ;
+(void)_parseJoinMethodTitleAndFeatures:(id)arg0 state:(id)arg1 ;
+(void)_parseURL:(id)arg0 state:(id)arg1 ;
-(BOOL)supportsSerializingConferenceWithSource:(NSUInteger)arg0 ;
-(id)deserializeConferences:(id)arg0 ;
-(id)serializeConference:(id)arg0 serializationBlockTitle:(id)arg1 ;


@end


#endif