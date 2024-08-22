// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CONFERENCEDATATYPECONVERTER_H
#define CONFERENCEDATATYPECONVERTER_H


#import <Foundation/Foundation.h>


@interface ConferenceDatatypeConverter : NSObject



+(NSUInteger)_calSourceFromEKSource:(NSUInteger)arg0 ;
+(NSUInteger)_ekSourceFromCalSource:(NSUInteger)arg0 ;
+(id)_calJoinMethodFromEKJoinMethod:(id)arg0 ;
+(id)_calJoinMethodsFromEKJoinMethods:(id)arg0 ;
+(id)_ekJoinMethodFromCalJoinMethod:(id)arg0 ;
+(id)_ekJoinMethodsFromCalJoinMethods:(id)arg0 ;
+(id)_ekVirtualConferenceFromCalVirtualConference:(id)arg0 ;
+(id)calVirtualConferenceFromEKVirtualConference:(id)arg0 ;
+(id)ekDeserializationResultFromCalDeserializationResult:(id)arg0 ;


@end


#endif