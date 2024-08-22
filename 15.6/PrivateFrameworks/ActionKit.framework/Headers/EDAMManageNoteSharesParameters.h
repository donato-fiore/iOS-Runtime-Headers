// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMMANAGENOTESHARESPARAMETERS_H
#define EDAMMANAGENOTESHARESPARAMETERS_H

@class NSArray, NSString;


#import "FATObject.h"

@interface EDAMManageNoteSharesParameters : FATObject

@property (retain, nonatomic) NSArray *invitationsToUnshare; // ivar: _invitationsToUnshare
@property (retain, nonatomic) NSArray *invitationsToUpdate; // ivar: _invitationsToUpdate
@property (retain, nonatomic) NSArray *membershipsToUnshare; // ivar: _membershipsToUnshare
@property (retain, nonatomic) NSArray *membershipsToUpdate; // ivar: _membershipsToUpdate
@property (retain, nonatomic) NSString *noteGuid; // ivar: _noteGuid


+(id)structFields;
+(id)structName;


@end


#endif