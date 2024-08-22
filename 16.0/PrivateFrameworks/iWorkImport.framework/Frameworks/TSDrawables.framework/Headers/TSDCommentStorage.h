// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCOMMENTSTORAGE_H
#define TSDCOMMENTSTORAGE_H

@class TSPObject, TSKAnnotationAuthor, NSDate, NSArray, NSUUID, NSString;
@protocol TSPCopying;


#import "TSDCommentStorage.h"

@interface TSDCommentStorage : TSPObject <TSPCopying>



@property (retain, nonatomic) TSKAnnotationAuthor *author; // ivar: _author
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (weak, nonatomic) TSDCommentStorage *parent; // ivar: _parent
@property (retain, nonatomic) NSArray *replies; // ivar: _replies
@property (readonly, nonatomic) TSDCommentStorage *rootCommentStorage; // ivar: _rootCommentStorage
@property (readonly, nonatomic) NSUUID *storageUUID; // ivar: _storageUUID
@property (copy, nonatomic) NSString *text; // ivar: _text


-(BOOL)canDeleteWithAuthor:(id)arg0 docIsReadOnly:(BOOL)arg1 ;
-(BOOL)canEditWithAuthor:(id)arg0 docIsReadOnly:(BOOL)arg1 ;
-(BOOL)isEqualToCommentStorage:(id)arg0 ;
-(BOOL)isOwner;
-(BOOL)isShared;
-(BOOL)p_canDeleteCommentStorageWithAuthor:(id)arg0 docIsReadOnly:(BOOL)arg1 ;
-(BOOL)p_canModifyCommentStorageWithAuthor:(id)arg0 docIsReadOnly:(BOOL)arg1 ;
-(BOOL)p_matchesCommentStorage:(id)arg0 ;
-(id)copyByAppendingText:(id)arg0 ;
-(id)copyWithAuthor:(id)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithContext:(id)arg0 preserveStorageUUID:(BOOL)arg1 ;
-(id)copyWithDate:(id)arg0 ;
-(id)copyWithDeletedReply:(id)arg0 ;
-(id)copyWithEditedReply:(id)arg0 ;
-(id)copyWithInsertedReply:(id)arg0 ;
-(id)copyWithReplies:(id)arg0 ;
-(id)copyWithText:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithContext:(id)arg0 author:(id)arg1 ;
-(id)initWithContext:(id)arg0 text:(id)arg1 creationDate:(id)arg2 author:(id)arg3 replies:(id)arg4 ;
-(id)initWithContext:(id)arg0 text:(id)arg1 creationDate:(id)arg2 author:(id)arg3 replies:(id)arg4 storageUUID:(id)arg5 ;
-(id)matchingReply:(id)arg0 ;
-(id)storageWithUUID:(id)arg0 ;
-(void)commentWillBeAddedToDocumentRoot;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif