// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHEETCONTENTDATASOURCE_H
#define SHSHEETCONTENTDATASOURCE_H

@class NSArray, NSDiffableDataSourceSnapshot;

#import <Foundation/Foundation.h>

#import "UIAirDropNode.h"
#import "SHSheetContentDataSourceState.h"

@interface SHSheetContentDataSource : NSObject

@property (readonly, copy, nonatomic) NSArray *actionProxies; // ivar: _actionProxies
@property (readonly, nonatomic) UIAirDropNode *airDropProxy; // ivar: _airDropProxy
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *diffableSnapshot; // ivar: _diffableSnapshot
@property (readonly, nonatomic) NSInteger excludeSectionTypes; // ivar: _excludeSectionTypes
@property (readonly, nonatomic) unsigned int nearbyCountSlotID; // ivar: _nearbyCountSlotID
@property (readonly, copy, nonatomic) NSArray *peopleProxies; // ivar: _peopleProxies
@property (readonly, copy, nonatomic) NSArray *shareProxies; // ivar: _shareProxies
@property (readonly, nonatomic) SHSheetContentDataSourceState *state; // ivar: _state


-(BOOL)containsSectionForIdentifier:(id)arg0 ;
-(id)_createDiffableSnapshotFromCurrentState;
-(id)actionProxyForIdentifier:(id)arg0 ;
-(id)activityForIdentifier:(id)arg0 ;
-(id)createChangeRequestFromCurrentState;
-(id)debugDescription;
-(id)description;
-(id)identifierForActivity:(id)arg0 ;
-(id)initWithState:(id)arg0 excludeSectionTypes:(NSInteger)arg1 ;
-(id)peopleProxyForIdentifier:(id)arg0 ;
-(id)shareProxyForIdentifier:(id)arg0 ;


@end


#endif