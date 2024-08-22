// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMNOTEBOOKDESCRIPTOR_H
#define EDAMNOTEBOOKDESCRIPTOR_H

@class NSString, NSNumber;


#import "FATObject.h"

@interface EDAMNotebookDescriptor : FATObject

@property (retain, nonatomic) NSString *contactName; // ivar: _contactName
@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (retain, nonatomic) NSNumber *hasSharedNotebook; // ivar: _hasSharedNotebook
@property (retain, nonatomic) NSNumber *joinedUserCount; // ivar: _joinedUserCount
@property (retain, nonatomic) NSString *notebookDisplayName; // ivar: _notebookDisplayName


+(id)structFields;
+(id)structName;


@end


#endif