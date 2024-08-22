// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMNOTEBOOKSHARETEMPLATE_H
#define EDAMNOTEBOOKSHARETEMPLATE_H

@class NSString, NSNumber, NSArray;


#import "FATObject.h"

@interface EDAMNotebookShareTemplate : FATObject

@property (retain, nonatomic) NSString *notebookGuid; // ivar: _notebookGuid
@property (retain, nonatomic) NSNumber *privilege; // ivar: _privilege
@property (retain, nonatomic) NSArray *recipientContacts; // ivar: _recipientContacts
@property (retain, nonatomic) NSNumber *recipientThreadId; // ivar: _recipientThreadId


+(id)structFields;
+(id)structName;


@end


#endif