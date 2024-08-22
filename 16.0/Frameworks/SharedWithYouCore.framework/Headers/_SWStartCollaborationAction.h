// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SWSTARTCOLLABORATIONACTION_H
#define _SWSTARTCOLLABORATIONACTION_H



#import "SWStartCollaborationAction.h"
#import "_SWCollaborationMetadata.h"

@interface _SWStartCollaborationAction : SWStartCollaborationAction

@property (readonly, nonatomic) _SWCollaborationMetadata *collaborationMetadata;


-(void)fulfillWithURL:(id)arg0 updatedMetadata:(id)arg1 ;


@end


#endif