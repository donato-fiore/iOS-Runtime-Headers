// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCARDGAMECENTERGROUP_H
#define CNCARDGAMECENTERGROUP_H

@class NSArray;


#import "CNCardGroup.h"

@interface CNCardGameCenterGroup : CNCardGroup

@property (retain, nonatomic) NSArray *relationshipResults; // ivar: _relationshipResults


+(BOOL)relationshipResultsContainsFriend:(id)arg0 ;
+(BOOL)shouldShowAddFriendActionForRelationshipResults:(id)arg0 ;
+(id)actionForRelationshipResults:(id)arg0 forContact:(id)arg1 ;
-(id)displayItems;
-(id)initWithContact:(id)arg0 relationshipResults:(id)arg1 ;


@end


#endif