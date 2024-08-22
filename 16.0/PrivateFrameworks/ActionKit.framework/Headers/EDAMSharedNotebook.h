// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMSHAREDNOTEBOOK_H
#define EDAMSHAREDNOTEBOOK_H

@class NSString, NSNumber;


#import "FATObject.h"
#import "EDAMSharedNotebookRecipientSettings.h"

@interface EDAMSharedNotebook : FATObject

@property (retain, nonatomic) NSString *email; // ivar: _email
@property (retain, nonatomic) NSString *globalId; // ivar: _globalId
@property (retain, nonatomic) NSNumber *id; // ivar: _id
@property (retain, nonatomic) NSString *notebookGuid; // ivar: _notebookGuid
@property (retain, nonatomic) NSNumber *notebookModifiable; // ivar: _notebookModifiable
@property (retain, nonatomic) NSNumber *privilege; // ivar: _privilege
@property (retain, nonatomic) NSNumber *recipientIdentityId; // ivar: _recipientIdentityId
@property (retain, nonatomic) EDAMSharedNotebookRecipientSettings *recipientSettings; // ivar: _recipientSettings
@property (retain, nonatomic) NSNumber *recipientUserId; // ivar: _recipientUserId
@property (retain, nonatomic) NSString *recipientUsername; // ivar: _recipientUsername
@property (retain, nonatomic) NSNumber *serviceAssigned; // ivar: _serviceAssigned
@property (retain, nonatomic) NSNumber *serviceCreated; // ivar: _serviceCreated
@property (retain, nonatomic) NSNumber *serviceUpdated; // ivar: _serviceUpdated
@property (retain, nonatomic) NSNumber *sharerUserId; // ivar: _sharerUserId
@property (retain, nonatomic) NSNumber *userId; // ivar: _userId
@property (retain, nonatomic) NSString *username; // ivar: _username


+(id)structFields;
+(id)structName;


@end


#endif