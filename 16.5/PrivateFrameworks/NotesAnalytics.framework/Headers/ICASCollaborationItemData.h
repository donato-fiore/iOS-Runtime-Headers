// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASCOLLABORATIONITEMDATA_H
#define ICASCOLLABORATIONITEMDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASCollaborationItemType.h"

@interface ICASCollaborationItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASCollaborationItemType *collaborationItemType; // ivar: _collaborationItemType


+(id)dataName;
-(id)initWithCollaborationItemType:(id)arg0 ;
-(id)toDict;


@end


#endif