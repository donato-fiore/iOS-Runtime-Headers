// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASCOLLABORATIONINVITESTEP_H
#define ICASCOLLABORATIONINVITESTEP_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASCollaborationInviteStep : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger collaborationInviteStep; // ivar: _collaborationInviteStep


-(id)initWithCollaborationInviteStep:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif