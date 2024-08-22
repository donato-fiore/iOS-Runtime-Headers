// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASNOTE_H
#define ASNOTE_H

@class NSString, NSNumber, NSArray, NSDate, NoteObject;
@protocol DADataElement;


#import "ASChangedCollectionLeaf.h"

@interface ASNote : ASChangedCollectionLeaf <DADataElement>



@property (retain, nonatomic) NSString *body; // ivar: _body
@property (nonatomic) BOOL bodyIsPlaintext; // ivar: _bodyIsPlaintext
@property (retain, nonatomic) NSNumber *bodyTruncated; // ivar: _bodyTruncated
@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (retain, nonatomic) NoteObject *localRecord; // ivar: _localRecord
@property (retain, nonatomic) NSString *messageClass; // ivar: _messageClass
@property (retain, nonatomic) NSString *subject; // ivar: _subject
@property (readonly) Class superclass;


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
+(id)externalRepClasses;
+(id)noteWithLocalNoteObject:(id)arg0 serverID:(id)arg1 account:(id)arg2 ;
-(BOOL)deleteFromContainer:(*void)arg0 ;
-(BOOL)deleteFromNoteContext;
-(BOOL)loadLocalItemWithAccount:(id)arg0 ;
-(BOOL)loadNoteObjectForAccount:(id)arg0 ;
-(BOOL)saveServerIDToExistingItem;
-(BOOL)saveServerIDToNoteDB;
-(BOOL)saveToNoteDBWithExistingRecord:(id)arg0 intoNoteStore:(id)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(BOOL)saveWithLocalObject:(*void)arg0 toContainer:(*void)arg1 shouldMergeProperties:(BOOL)arg2 outMergeDidChooseLocalProperties:(*BOOL)arg3 account:(id)arg4 ;
-(NSInteger)dataclass;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalNoteObject:(id)arg0 serverID:(id)arg1 account:(id)arg2 ;
-(void)_loadAttributesFromLocalNoteObject:(id)arg0 forAccount:(id)arg1 ;
-(void)appendActiveSyncDataForTask:(id)arg0 toWBXMLData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadClientIDs;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;
-(void)postProcessApplicationData;
-(void)setLocalItem:(*void)arg0 ;


@end


#endif