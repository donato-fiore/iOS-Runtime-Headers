// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONTHREADSMUTEASSERTION_H
#define NCNOTIFICATIONTHREADSMUTEASSERTION_H

@class NSSet, NSString;
@protocol BSDescriptionProviding, NCNotificationMuteAssertion;

#import <Foundation/Foundation.h>


@interface NCNotificationThreadsMuteAssertion : NSObject <BSDescriptionProviding, NCNotificationMuteAssertion>

 {
    NSSet *_mutedThreadIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)threadsMuteAssertionWithMutedThreadIDs:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)activeMuteAssertionLevelForThreadIdentifier:(id)arg0 ;
-(id)_initWithMutedThreadIDs:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif