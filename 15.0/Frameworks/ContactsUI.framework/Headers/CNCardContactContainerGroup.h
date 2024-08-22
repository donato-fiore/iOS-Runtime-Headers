// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCARDCONTACTCONTAINERGROUP_H
#define CNCARDCONTACTCONTAINERGROUP_H

@class NSArray;


#import "CNCardGroup.h"

@interface CNCardContactContainerGroup : CNCardGroup

@property (retain, nonatomic) NSArray *containers; // ivar: _containers


-(id)displayItems;
-(id)editingItems;


@end


#endif