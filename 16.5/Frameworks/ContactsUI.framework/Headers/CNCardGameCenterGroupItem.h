// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCARDGAMECENTERGROUPITEM_H
#define CNCARDGAMECENTERGROUPITEM_H

@class GKContactRelationshipResult;


#import "CNCardGroupItem.h"

@interface CNCardGameCenterGroupItem : CNCardGroupItem

@property (retain, nonatomic) GKContactRelationshipResult *relationshipResult; // ivar: _relationshipResult


-(id)initWithRelationshipResult:(id)arg0 ;


@end


#endif