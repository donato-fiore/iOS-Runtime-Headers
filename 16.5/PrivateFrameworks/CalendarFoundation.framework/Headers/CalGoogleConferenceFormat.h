// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALGOOGLECONFERENCEFORMAT_H
#define CALGOOGLECONFERENCEFORMAT_H

@protocol CalConferencePersistenceFormat;

#import <Foundation/Foundation.h>


@interface CalGoogleConferenceFormat : NSObject <CalConferencePersistenceFormat>





+(id)_delimiterRegex;
+(id)calConferenceSerializationHandle;
-(BOOL)supportsSerializingConferenceWithSource:(NSUInteger)arg0 ;
-(id)deserializeConferences:(id)arg0 ;
-(id)serializeConference:(id)arg0 serializationBlockTitle:(id)arg1 ;


@end


#endif