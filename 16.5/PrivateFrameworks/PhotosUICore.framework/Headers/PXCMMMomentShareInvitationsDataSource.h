// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMMOMENTSHAREINVITATIONSDATASOURCE_H
#define PXCMMMOMENTSHAREINVITATIONSDATASOURCE_H



#import "PXCMMInvitationsDataSource.h"
#import "PXCMMMomentShareInvitationsDataSourceState.h"

@interface PXCMMMomentShareInvitationsDataSource : PXCMMInvitationsDataSource

@property (readonly, nonatomic) PXCMMMomentShareInvitationsDataSourceState *state; // ivar: _state


+(id)new;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)init;
-(id)initWithState:(id)arg0 ;
-(id)invitationAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)invitationForObjectID:(id)arg0 ;
-(id)objectAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)objectIDAtItemIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(struct PXSimpleIndexPath )indexPathForObjectReference:(id)arg0 ;


@end


#endif