// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKATTENDEEDESCRIPTIONGENERATOR_H
#define CUIKATTENDEEDESCRIPTIONGENERATOR_H



#import "CUIKDescriptionGenerator.h"

@interface CUIKAttendeeDescriptionGenerator : CUIKDescriptionGenerator



+(id)displayNameForIdentity:(id)arg0 ;
+(id)displayNameForIdentity:(id)arg0 outFirstName:(*id)arg1 outLastName:(*id)arg2 ;
+(id)displayNameForParticipant:(id)arg0 event:(id)arg1 options:(NSUInteger)arg2 ;
+(id)sharedGenerator;


@end


#endif