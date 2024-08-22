// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWUPDATECOLLABORATIONPARTICIPANTSACTION_H
#define SWUPDATECOLLABORATIONPARTICIPANTSACTION_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;


#import "SWAction.h"
#import "SWCollaborationMetadata.h"

@interface SWUpdateCollaborationParticipantsAction : SWAction <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSArray *addedIdentities; // ivar: _addedIdentities
@property (retain, nonatomic) SWCollaborationMetadata *collaborationMetadata; // ivar: _collaborationMetadata
@property (retain, nonatomic) NSArray *removedIdentities; // ivar: _removedIdentities


+(BOOL)supportsSecureCoding;
+(id)actionWithMetadata:(id)arg0 addedIdentities:(id)arg1 removedIdentites:(id)arg2 ;
-(BOOL)isEqualToAction:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestinationAction:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 addedIdentities:(id)arg1 removedIdentites:(id)arg2 ;
-(void)encodeWithBSActionSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif