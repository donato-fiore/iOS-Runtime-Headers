// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKLOCATIONDESCRIPTIONGENERATOR_H
#define CUIKLOCATIONDESCRIPTIONGENERATOR_H


#import <Foundation/Foundation.h>


@interface CUIKLocationDescriptionGenerator : NSObject



+(BOOL)_conferenceURL:(id)arg0 isSameAsLocationString:(id)arg1 ;
+(id)_conferenceStringForURL:(id)arg0 options:(NSUInteger)arg1 outImageNames:(*id)arg2 ;
+(id)conferenceStringForURL:(id)arg0 options:(NSUInteger)arg1 ;
+(id)conferenceURLForEvent:(id)arg0 options:(NSUInteger)arg1 ;
+(id)glyphNamesForConferenceString:(id)arg0 ;
+(id)labelForLocation:(id)arg0 ;
+(id)locationStringForEvent:(id)arg0 ;
+(id)locationStringForEvent:(id)arg0 options:(NSUInteger)arg1 ;
+(id)locationStringForLocation:(id)arg0 locationWithoutPrediction:(id)arg1 preferredLocation:(id)arg2 conferenceURL:(id)arg3 ;
+(id)locationStringForLocation:(id)arg0 locationWithoutPrediction:(id)arg1 preferredLocation:(id)arg2 conferenceURL:(id)arg3 options:(NSUInteger)arg4 ;


@end


#endif