// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUIFACETIMEMANAGER_H
#define EKUIFACETIMEMANAGER_H


#import <Foundation/Foundation.h>


@interface EKUIFacetimeManager : NSObject



+(BOOL)canFaceTime:(NSUInteger)arg0 withContacts:(id)arg1 ;
+(BOOL)canFaceTime:(NSUInteger)arg0 withParticipants:(id)arg1 ;
+(BOOL)faceTimeAvailable:(NSUInteger)arg0 ;
+(id)faceTimeURLForType:(NSUInteger)arg0 andHandle:(id)arg1 ;
+(id)faceTimeURLForType:(NSUInteger)arg0 withContacts:(id)arg1 ;
+(id)faceTimeURLForType:(NSUInteger)arg0 withHandles:(id)arg1 ;
+(id)faceTimeURLForType:(NSUInteger)arg0 withParticipants:(id)arg1 ;
+(id)handlesForContacts:(id)arg0 ;
+(id)handlesForParticipants:(id)arg0 ;
+(id)preferredHandleForContact:(id)arg0 withDefaultPhoneNumber:(id)arg1 emailAddress:(id)arg2 ;
+(void)startFaceTime:(NSUInteger)arg0 withContacts:(id)arg1 ;
+(void)startFaceTime:(NSUInteger)arg0 withParticipants:(id)arg1 ;


@end


#endif