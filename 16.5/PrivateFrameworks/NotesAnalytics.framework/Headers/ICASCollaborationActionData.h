// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASCOLLABORATIONACTIONDATA_H
#define ICASCOLLABORATIONACTIONDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASCollaborationActionType.h"
#import "ICASCollaborationInviteStep.h"

@interface ICASCollaborationActionData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASCollaborationActionType *collaborationActionType; // ivar: _collaborationActionType
@property (readonly, nonatomic) ICASCollaborationInviteStep *collaborationInviteStep; // ivar: _collaborationInviteStep
@property (readonly, nonatomic) NSString *collaborationMethod; // ivar: _collaborationMethod


+(id)dataName;
-(id)initWithCollaborationActionType:(id)arg0 collaborationInviteStep:(id)arg1 collaborationMethod:(id)arg2 ;
-(id)toDict;


@end


#endif