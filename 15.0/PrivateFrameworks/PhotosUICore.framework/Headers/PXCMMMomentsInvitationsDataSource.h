// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMMOMENTSINVITATIONSDATASOURCE_H
#define PXCMMMOMENTSINVITATIONSDATASOURCE_H



#import "PXCMMInvitationsDataSource.h"
#import "PXCMMMomentsInvitationsDataSourceState.h"

@interface PXCMMMomentsInvitationsDataSource : PXCMMInvitationsDataSource

@property (readonly, nonatomic) PXCMMMomentsInvitationsDataSourceState *_state; // ivar: __state


-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)initWithState:(id)arg0 ;
-(id)invitationAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)invitationForObjectID:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectIDAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif