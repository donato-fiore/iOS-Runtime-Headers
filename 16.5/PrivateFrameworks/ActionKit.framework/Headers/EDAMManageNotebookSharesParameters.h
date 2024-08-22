// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMMANAGENOTEBOOKSHARESPARAMETERS_H
#define EDAMMANAGENOTEBOOKSHARESPARAMETERS_H

@class NSArray, NSString;


#import "FATObject.h"

@interface EDAMManageNotebookSharesParameters : FATObject

@property (retain, nonatomic) NSArray *invitationsToCreateOrUpdate; // ivar: _invitationsToCreateOrUpdate
@property (retain, nonatomic) NSString *inviteMessage; // ivar: _inviteMessage
@property (retain, nonatomic) NSArray *membershipsToUpdate; // ivar: _membershipsToUpdate
@property (retain, nonatomic) NSString *notebookGuid; // ivar: _notebookGuid
@property (retain, nonatomic) NSArray *unshares; // ivar: _unshares


+(id)structFields;
+(id)structName;


@end


#endif