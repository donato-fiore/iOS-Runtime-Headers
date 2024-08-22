// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NOTESASSISTANTFOLDEROPTION_H
#define NOTESASSISTANTFOLDEROPTION_H

@class NSString, NSManagedObjectID;

#import <Foundation/Foundation.h>


@interface NotesAssistantFolderOption : NSObject

@property (retain, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSString *accountTitle; // ivar: _accountTitle
@property (retain, nonatomic) NSString *fullTitle; // ivar: _fullTitle
@property (retain, nonatomic) NSManagedObjectID *managedObjectID; // ivar: _managedObjectID
@property (retain, nonatomic) NSString *parentTitle; // ivar: _parentTitle
@property (retain, nonatomic) NSString *title; // ivar: _title


+(void)disambiguateFolderOptions:(id)arg0 ;
+(void)disambiguateSameTitleFolderOptions:(id)arg0 ;
-(id)debugDescription;
-(id)initWithLegacyFolder:(id)arg0 ;
-(id)initWithModernFolder:(id)arg0 ;


@end


#endif