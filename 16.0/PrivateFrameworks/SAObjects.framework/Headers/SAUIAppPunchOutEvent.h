// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIAPPPUNCHOUTEVENT_H
#define SAUIAPPPUNCHOUTEVENT_H

@class NSString, NSURL;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAUIAppPunchOutEvent : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *appDisplayName;
@property (copy, nonatomic) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *originalCommandId;
@property (copy, nonatomic) NSString *punchOutName;
@property (copy, nonatomic) NSURL *punchOutUri;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)appPunchOutEvent;
+(id)appPunchOutEventWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif