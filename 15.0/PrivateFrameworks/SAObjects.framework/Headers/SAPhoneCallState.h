// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAPHONECALLSTATE_H
#define SAPHONECALLSTATE_H

@class NSString;
@protocol SABackgroundContextObject;


#import "AceObject.h"

@interface SAPhoneCallState : AceObject <SABackgroundContextObject>



@property (nonatomic) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL incoming;
@property (readonly) Class superclass;


+(id)callState;
+(id)callStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif