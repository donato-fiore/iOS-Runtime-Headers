// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCNCONTACTGROUP_H
#define WFCNCONTACTGROUP_H

@class NSArray, CNGroup;


#import "WFContactGroup.h"

@interface WFCNContactGroup : WFContactGroup

@property (retain, nonatomic) NSArray *cachedMembers; // ivar: _cachedMembers
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) CNGroup *group; // ivar: _group


+(id)allContactGroups;
+(id)contactGroupWithCNGroup:(id)arg0 ;
-(BOOL)containsContact:(id)arg0 ;
-(id)initWithCNGroup:(id)arg0 ;
-(id)name;


@end


#endif