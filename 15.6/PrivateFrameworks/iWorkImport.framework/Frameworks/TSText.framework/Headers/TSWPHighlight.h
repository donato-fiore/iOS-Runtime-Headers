// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPHIGHLIGHT_H
#define TSWPHIGHLIGHT_H

@class TSPObject, NSString, TSKAnnotationAuthor, TSDCommentStorage, NSDate;
@protocol TSDComment, TSPCopying, TSKDocumentObject, TSWPTextSpanningObject, TSWPOverlappingField;


#import "TSWPStorage.h"

@interface TSWPHighlight : TSPObject <TSDComment, TSPCopying, TSKDocumentObject, TSWPTextSpanningObject, TSWPOverlappingField>



@property (readonly, nonatomic) int annotationDisplayStringType;
@property (readonly, nonatomic) int annotationType;
@property (readonly, nonatomic) NSString *annotationUUID;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (retain, nonatomic) TSDCommentStorage *commentStorage; // ivar: _commentStorage
@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isHighlight;
@property (weak, nonatomic) TSWPStorage *parentStorage; // ivar: _parentStorage
@property (copy, nonatomic) TSDCommentStorage *storage;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *textAttributeUUIDString; // ivar: _textAttributeUUIDString


+(id)defaultHighlightWithContext:(id)arg0 includeCommentWithAuthor:(id)arg1 ;
+(id)highlightTextColorForHighlights:(id)arg0 ;
-(BOOL)isCommentEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToObject:(id)arg0 ;
-(BOOL)isFloatingComment;
-(BOOL)isInDocument;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 commentStorage:(id)arg1 ;
-(id)initWithContext:(id)arg0 commentStorage:(id)arg1 annotationUUID:(id)arg2 ;
-(void)commentWillBeAddedToDocumentRoot;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg0 key:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif