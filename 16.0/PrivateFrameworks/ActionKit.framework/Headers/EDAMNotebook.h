// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMNOTEBOOK_H
#define EDAMNOTEBOOK_H

@class NSNumber, NSString, NSArray;


#import "FATObject.h"
#import "EDAMBusinessNotebook.h"
#import "EDAMUser.h"
#import "EDAMPublishing.h"
#import "EDAMNotebookRecipientSettings.h"
#import "EDAMNotebookRestrictions.h"

@interface EDAMNotebook : FATObject

@property (retain, nonatomic) EDAMBusinessNotebook *businessNotebook; // ivar: _businessNotebook
@property (retain, nonatomic) EDAMUser *contact; // ivar: _contact
@property (retain, nonatomic) NSNumber *defaultNotebook; // ivar: _defaultNotebook
@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSNumber *published; // ivar: _published
@property (retain, nonatomic) EDAMPublishing *publishing; // ivar: _publishing
@property (retain, nonatomic) EDAMNotebookRecipientSettings *recipientSettings; // ivar: _recipientSettings
@property (retain, nonatomic) EDAMNotebookRestrictions *restrictions; // ivar: _restrictions
@property (retain, nonatomic) NSNumber *serviceCreated; // ivar: _serviceCreated
@property (retain, nonatomic) NSNumber *serviceUpdated; // ivar: _serviceUpdated
@property (retain, nonatomic) NSArray *sharedNotebookIds; // ivar: _sharedNotebookIds
@property (retain, nonatomic) NSArray *sharedNotebooks; // ivar: _sharedNotebooks
@property (retain, nonatomic) NSString *stack; // ivar: _stack
@property (retain, nonatomic) NSNumber *updateSequenceNum; // ivar: _updateSequenceNum


+(id)structFields;
+(id)structName;


@end


#endif